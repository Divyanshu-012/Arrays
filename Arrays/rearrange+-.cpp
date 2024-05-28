#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> neww(n, 0);
        int posIndex = 0;
        int negIndex = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                neww[posIndex] = nums[i];
                posIndex += 2;
            }
            if (nums[i] < 0) {
                neww[negIndex] = nums[i];
                negIndex += 2;
            }
        }

        return neww;
    }
};

int main() {
    // Example usage
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    
    Solution sol;
    vector<int> result = sol.rearrangeArray(nums);
    
    cout << "Rearranged array: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
