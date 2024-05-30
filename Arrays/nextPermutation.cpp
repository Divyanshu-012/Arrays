#include <iostream>
#include <vector>
#include <algorithm> // For reverse and swap

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no such element is found, reverse the entire array
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return; // Important to return here to avoid further processing
        }

        // Step 3: Find the element just larger than nums[ind] from the end
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[ind], nums[i]);
                break;
            }
        }

        // Step 4: Reverse the elements after index 'ind'
        reverse(nums.begin() + ind + 1, nums.end());
    }
};

int main() {
    vector<int> nums = {2, 3, 1}; // Example input

    Solution sol;
    sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
