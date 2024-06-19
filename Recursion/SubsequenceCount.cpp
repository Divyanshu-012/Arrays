#include <iostream>
#include <vector>
using namespace std;

// Recursive function to count subsets with the given sum
int countSubsequences(int ind, int current_sum, int target_sum, const vector<int>& arr) {
    if (ind == arr.size()) {
        return (current_sum == target_sum) ? 1 : 0;
    }

    // Include the current element
    current_sum += arr[ind];
    int count_including_current = countSubsequences(ind + 1, current_sum, target_sum, arr);

    // Exclude the current element (backtrack)
    current_sum -= arr[ind];
    int count_excluding_current = countSubsequences(ind + 1, current_sum, target_sum, arr);

    // Return the total count
    return count_including_current + count_excluding_current;
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

    int totalCount = countSubsequences(0, 0, sum, arr);
    cout << "Number of subsequences with sum " << sum << ": " << totalCount << endl;

    return 0;
}
