#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void logic(int ind, vector<int>& arr, vector<int>& ans, int sum) {
        if (ind == arr.size()) {
            ans.push_back(sum);
            return;
        }
        // Include the current element
        logic(ind + 1, arr, ans, sum + arr[ind]);
        // Exclude the current element
        logic(ind + 1, arr, ans, sum);
    }

    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        logic(0, arr, ans, 0);
        return ans;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = solution.subsetSums(arr, n);

    cout << "Subset sums are: ";
    for (int sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
