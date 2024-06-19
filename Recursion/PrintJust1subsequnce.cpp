#include <iostream>
#include <vector>
using namespace std;

bool printOneSubsequence(int ind, vector<int>& subseq, int current_sum, int target_sum, const vector<int>& arr) {
    if (ind == arr.size()) {
        if (current_sum == target_sum) {
            for (int val : subseq) {
                cout << val << " ";
            }
            cout << endl;
            return true; // Found a valid subsequence
        }
        return false; // No valid subsequence found at this path
    }

    // Include the current element
    subseq.push_back(arr[ind]);
    current_sum += arr[ind];
    if (printOneSubsequence(ind + 1, subseq, current_sum, target_sum, arr)) {
        return true; // If found, propagate the result upwards
    }

    // Exclude the current element (backtrack)
    subseq.pop_back();
    current_sum -= arr[ind];
    if (printOneSubsequence(ind + 1, subseq, current_sum, target_sum, arr)) {
        return true; // If found, propagate the result upwards
    }

    return false; // No valid subsequence found in either case
}

int main() {
    int n, sum;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> sum;

    vector<int> subseq;
    if (!printOneSubsequence(0, subseq, 0, sum, arr)) {
        cout << "No subsequence found with the given sum." << endl;
    }

    return 0;
}
