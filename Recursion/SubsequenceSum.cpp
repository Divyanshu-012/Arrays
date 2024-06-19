#include <iostream>
#include <vector>
using namespace std;

// Function to print a vector
void print(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to find subsets with the given sum
void f(int ind, vector<int>& subset, int current_sum, int target_sum, const vector<int>& arr) {
    if (ind == arr.size()) {
        if (current_sum == target_sum) {
            print(subset);
        }
        return;
    }

    // Include the current element
    subset.push_back(arr[ind]);
    current_sum += arr[ind];
    f(ind + 1, subset, current_sum, target_sum, arr);

    // Exclude the current element (backtrack)
    subset.pop_back();
    current_sum -= arr[ind];
    f(ind + 1, subset, current_sum, target_sum, arr);
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

    vector<int> subset;
    f(0, subset, 0, sum, arr);

    return 0;
}
