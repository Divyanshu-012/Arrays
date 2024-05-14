#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <chrono>
#include <random>

using namespace std;

const int BUFFER_SIZE = 5;
queue<int> buffer;
mutex mtx;
condition_variable cv_full;
condition_variable cv_empty;

void producer(int max_iterations) {
    for (int i = 0; i < max_iterations; ++i) {
        int item = rand() % 100 + 1;
        {
            unique_lock<mutex> lock(mtx);
            cv_empty.wait(lock, []{ return buffer.size() < BUFFER_SIZE; });
            buffer.push(item);
            cout << "Produced item: " << item << endl;
        }
        cv_full.notify_one();
        this_thread::sleep_for(chrono::milliseconds(rand() % 1000 + 100));
    }
}

void consumer(int max_iterations) {
    for (int i = 0; i < max_iterations; ++i) {
        int item;
        {
            unique_lock<mutex> lock(mtx);
            cv_full.wait(lock, []{ return !buffer.empty(); });
            item = buffer.front();
            buffer.pop();
            cout << "Consumed item: " << item << endl;
        }
        cv_empty.notify_one();
        this_thread::sleep_for(chrono::milliseconds(rand() % 1000 + 100));
    }
}

int main() {
    srand(time(nullptr));

    const int MAX_ITERATIONS = 10;

    vector<thread> producers;
    vector<thread> consumers;

    for (int i = 0; i < 2; ++i) {
        producers.emplace_back(producer, MAX_ITERATIONS);
        consumers.emplace_back(consumer, MAX_ITERATIONS);
    }

    for (auto& p : producers)
        p.join();

    for (auto& c : consumers)
        c.join();

    return 0;
}
