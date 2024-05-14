#include <iostream>
#include <thread>
#include <vector>
#include <semaphore.h>
#include <unistd.h> // for sleep function

using namespace std;

const int NUM_READERS = 5;
const int NUM_WRITERS = 2;

sem_t rwMutex, mutex;
int readerCount = 0;

void readerFunction(int id) {
    sem_wait(&mutex);
    readerCount++;
    if (readerCount == 1) {
        sem_wait(&rwMutex);
    }
    sem_post(&mutex);

    // Reading from the resource
    cout << "Reader " << id << " is reading" << endl;
    sleep(1); // Simulate reading

    sem_wait(&mutex);
    readerCount--;
    if (readerCount == 0) {
        sem_post(&rwMutex);
    }
    sem_post(&mutex);
}

void writerFunction(int id) {
    sem_wait(&rwMutex);

    // Writing to the resource
    cout << "Writer " << id << " is writing" << endl;
    sleep(2); // Simulate writing

    sem_post(&rwMutex);
}

int main() {
    // Initialize semaphores
    sem_init(&rwMutex, 0, 1);
    sem_init(&mutex, 0, 1);

    // Create reader threads
    vector<thread> readerThreads;
    for (int i = 0; i < NUM_READERS; ++i) {
        readerThreads.emplace_back(readerFunction, i);
    }

    // Create writer threads
    vector<thread> writerThreads;
    for (int i = 0; i < NUM_WRITERS; ++i) {
        writerThreads.emplace_back(writerFunction, i);
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
