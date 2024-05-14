#include <iostream>
#include <vector>

using namespace std;

struct Process {
    int id;           // Process ID
    int arrivalTime;  // Arrival time of the process
    int burstTime;    // Burst time of the process
    int completionTime; // Completion time of the process
    int waitingTime;  // Waiting time of the process
    int turnaroundTime; // Turnaround time of the process
};

void calculateCompletionTimes(vector<Process>& processes) {
    int currentTime = 0;
    for (int i = 0; i < processes.size(); ++i) {
        currentTime += processes[i].burstTime;
        processes[i].completionTime = currentTime;
    }
}

void calculateWaitingTimes(vector<Process>& processes) {
    processes[0].waitingTime = 0;
    for (int i = 1; i < processes.size(); ++i) {
        processes[i].waitingTime = processes[i - 1].completionTime - processes[i].arrivalTime;
    }
}

void calculateTurnaroundTimes(vector<Process>& processes) {
    for (int i = 0; i < processes.size(); ++i) {
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
    }
}

void printProcesses(const vector<Process>& processes) {
    cout << "Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n";
    for (const auto& process : processes) {
        cout << process.id << "\t\t" << process.arrivalTime << "\t\t" << process.burstTime << "\t\t"
             << process.completionTime << "\t\t" << process.waitingTime << "\t\t" << process.turnaroundTime << "\n";
    }
}

int main() {
    vector<Process> processes = {
        {1, 0, 6, 0, 0, 0},
        {2, 2, 3, 0, 0, 0},
        {3, 4, 4, 0, 0, 0},
        {4, 6, 5, 0, 0, 0}
    };

    calculateCompletionTimes(processes);
    calculateWaitingTimes(processes);
    calculateTurnaroundTimes(processes);
    printProcesses(processes);

    return 0;
}
