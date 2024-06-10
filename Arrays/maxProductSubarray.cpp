#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long pre = 1, suf = 1;
        long long maxi = INT_MIN;

        for(int i = 0; i < nums.size(); i++) {
            pre *= nums[i];
            maxi = max(maxi, pre);
            if(pre == 0) pre = 1;
        }

        for(int i = nums.size() - 1; i >= 0; i--) {
            suf *= nums[i];
            maxi = max(maxi, suf);
            if(suf == 0) suf = 1;
        }

        return maxi;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, -2, 4};  // example input
    int result = sol.maxProduct(nums);
    cout << "Maximum product subarray: " << result << endl;
    return 0;
}
