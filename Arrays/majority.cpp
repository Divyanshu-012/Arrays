#include <iostream>
#include <vector>
#include <map>

using namespace std;
// -----using Hash-------

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         map<int, int> mpp;  // Create a map to store the frequency of each element

//         // Populate the map with the frequency of each element in the array
//         for (int i = 0; i < n; i++) {
//             mpp[nums[i]]++;
//         }

//         // Iterate through the map to find the element that appears more than n/2 times
//         for (const auto& it : mpp) {
//             if (it.second > (n / 2)) {
//                 return it.first;
//             }
//         }

//         // If no majority element is found (shouldn't happen given the problem constraints), return -1
//         return -1;
//     }
// };





// using   **********  moore's voting algo  ****************

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el = 0;
        int cnt = 0;

        // Phase 1: Find a candidate
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Phase 2: Verify the candidate
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) cnt1++;
        }

        if (cnt1 > (nums.size() / 2)) {
            return el;
        }

        return -1;
    }
};

int main() {
    // Example usage
    vector<int> nums = {3, 2, 3};

    Solution sol;
    int result = sol.majorityElement(nums);

    cout << "Majority element is: " << result << endl;

    return 0;
}
