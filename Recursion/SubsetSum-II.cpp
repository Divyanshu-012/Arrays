#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void function(size_t ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans) {
        ans.push_back(ds);
        for (size_t i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[i-1]) continue;
            ds.push_back(nums[i]);
            function(i+1, nums, ds, ans);  // Use size_t for i here
            ds.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        function(0, nums, ds, ans);  // Use size_t for ind here
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = sol.subsetsWithDup(nums);

    cout << "Subsets with duplicates:\n";
    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
