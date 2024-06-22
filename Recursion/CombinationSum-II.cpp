#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) continue; // Skip duplicates
            if (arr[i] > target) break; // Early termination

            ds.push_back(arr[i]);
            findCombination(i + 1, target - arr[i], arr, ans, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);
        
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5}; // Example input
    int target = 8;

    vector<vector<int>> result = solution.combinationSum2(candidates, target);

    cout << "Unique combinations that sum to " << target << ":" << endl;
    for (const auto& combination : result) {
        cout << "{ ";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
