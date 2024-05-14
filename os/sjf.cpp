#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
};

bool compareArrivalTime(const Process& a, const Process& b) {
    return a.arrival_time < b.arrival_time;
}

bool compareBurstTime(const Process& a, const Process& b) {
    return a.burst_time < b.burst_time;
}

void sjf_scheduling(vector<Process>& processes) {
    // Sort processes based on arrival time
    sort(processes.begin(), processes.end(), compareArrivalTime);

    int n = processes.size();
    int current_time = 0;
    int total_waiting_time = 0;

    cout << "Process\tWaiting Time\n";

    for (int i = 0; i < n; ++i) {
        // Update current time if needed
        if (current_time < processes[i].arrival_time)
            current_time = processes[i].arrival_time;

        // Find the process with the shortest burst time
        int shortest_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (processes[j].arrival_time <= current_time && 
                processes[j].burst_time < processes[shortest_index].burst_time)
                shortest_index = j;
        }

        // Swap the found smallest burst time process with the current process
        swap(processes[i], processes[shortest_index]);

        // Update waiting time and current time
        int waiting_time = current_time - processes[i].arrival_time;
        total_waiting_time += waiting_time;
        current_time += processes[i].burst_time;

        cout << processes[i].id << "\t" << waiting_time << endl;
    }

    cout << "Average Waiting Time: " << static_cast<double>(total_waiting_time) / n << endl;
}

int main() {
    vector<Process> processes = {{1, 0, 6}, {2, 1, 8}, {3, 2, 7}, {4, 3, 3}, {5, 4, 4}};

    sjf_scheduling(processes);

    return 0;
}
