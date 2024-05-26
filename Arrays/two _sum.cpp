#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    temp.push_back(i);
                    temp.push_back(j);
                    return temp; // Return as soon as we find a solution
                }
            }
        }
        return temp; // Return empty vector if no solution is found
    }
};

int main() {
    // Example usage
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to " << target << " are: ";
        for (int index : result) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    
    return 0;
}
