#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long  sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1]) k++; // Skip duplicates for k
                        while (k < l && nums[l] == nums[l + 1]) l--; // Skip duplicates for l
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 0, -1, 0, -2, 2}; // Example input
    int target = 0; // Example target

    vector<vector<int>> result = solution.fourSum(nums, target);

    cout << "Quadruplets that sum to " << target << " are:" << endl;
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
