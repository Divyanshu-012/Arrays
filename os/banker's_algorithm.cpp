#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if the requested resources can be allocated to a process
bool isSafe(int processes, int resources, const vector<vector<int>>& maxNeed, const vector<vector<int>>& allocation, const vector<int>& available) {
    vector<vector<int>> need(processes, vector<int>(resources));

    // Calculate the need matrix
    for (int i = 0; i < processes; ++i) {
        for (int j = 0; j < resources; ++j) {
            need[i][j] = maxNeed[i][j] - allocation[i][j];
        }
    }

    // Initialize the finish vector
    vector<bool> finish(processes, false);

    // Initialize the work vector with available resources
    vector<int> work(available);

    // Find a process which can be allocated resources
    int count = 0;
    while (count < processes) {
        bool found = false;
        for (int i = 0; i < processes; ++i) {
            if (!finish[i]) {
                int j;
                for (j = 0; j < resources; ++j) {
                    if (need[i][j] > work[j]) {
                        break;
                    }
                }
                if (j == resources) {
                    // Process can be allocated resources
                    for (int k = 0; k < resources; ++k) {
                        work[k] += allocation[i][k];
                    }
                    finish[i] = true;
                    ++count;
                    found = true;
                }
            }
        }
        // If no process can be allocated resources, break
        if (!found) {
            break;
        }
    }

    // If all processes are allocated resources, return true
    return count == processes;
}

int main() {
    int processes, resources;

    cout << "Enter the number of processes: ";
    cin >> processes;

    cout << "Enter the number of resources: ";
    cin >> resources;

    vector<vector<int>> maxNeed(processes, vector<int>(resources));
    vector<vector<int>> allocation(processes, vector<int>(resources));
    vector<int> available(resources);

    cout << "Enter the maximum need matrix: ";
    for (int i = 0; i < processes; ++i) {
        for (int j = 0; j < resources; ++j) {
            cin >> maxNeed[i][j];
        }
    }

    cout << "Enter the allocation matrix: ";
    for (int i = 0; i < processes; ++i) {
        for (int j = 0; j < resources; ++j) {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter the available resources: ";
    for (int j = 0; j < resources; ++j) {
        cin >> available[j];
    }

    // Check if the system is in a safe state
    if (isSafe(processes, resources, maxNeed, allocation, available)) {
        cout << "System is in a safe state." << endl;
    } else {
        cout << "System is not in a safe state." << endl;
    }

    return 0;
}
