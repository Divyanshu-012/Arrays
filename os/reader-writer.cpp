#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <vector>
#include <semaphore.h>

using namespace std;

// Define the number of readers and writers
const int NUM_READERS = 5;
const int NUM_WRITERS = 2;

// Global variables
int readerCount = 0;
sem_t rwMutex, mutex;

// Reader function
void reader(int id) {
    sem_wait(&mutex);
    readerCount++;
    if (readerCount == 1) {
        sem_wait(&rwMutex);
    }
    sem_post(&mutex);

    // Reading from the resource
    cout << "Reader " << id << " is reading" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000)); // Simulate reading

    sem_wait(&mutex);
    readerCount--;
    if (readerCount == 0) {
        sem_post(&rwMutex);
    }
    sem_post(&mutex);
}

// Writer function
void writer(int id) {
    sem_wait(&rwMutex);

    // Writing to the resource
    cout << "Writer " << id << " is writing" << endl;
    this_thread::sleep_for(chrono::milliseconds(2000)); // Simulate writing

    sem_post(&rwMutex);
}

int main() {
    // Initialize semaphores
    sem_init(&rwMutex, 0, 1);
    sem_init(&mutex, 0, 1);

    // Create reader threads
    vector<thread> readerThreads;
    for (int i = 0; i < NUM_READERS; ++i) {
        readerThreads.emplace_back(reader, i);
    }

    // Create writer threads
    vector<thread> writerThreads;
    for (int i = 0; i < NUM_WRITERS; ++i) {
        writerThreads.emplace_back(writer, i);
    }

    // Join reader threads
    for (auto& thread : readerThreads) {
        thread.join();
    }

    // Join writer threads
    for (auto& thread : writerThreads) {
        thread.join();
    }

    // Destroy semaphores
    sem_destroy(&rwMutex);
    sem_destroy(&mutex);

    return 0;
}
