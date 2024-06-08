#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

//  ************** this solution isn't taking extra space ********

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1; // Pointer for the last element in nums1's valid part
//         int j = n - 1; // Pointer for the last element in nums2
//         int k = m + n - 1; // Pointer for the last position in nums1

//         // Merge nums2 into nums1 starting from the end
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k] = nums1[i];
//                 i--;
//             } else {
//                 nums1[k] = nums2[j];
//                 j--;
//             }
//             k--;
//         }

//         // If there are remaining elements in nums2
//         while (j >= 0) {
//             nums1[k] = nums2[j];
//             j--;
//             k--;
//         }

//         // No need to handle remaining elements in nums1 as they are already in place
//     }
// };




class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        vector<int> nums3;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums3.push_back(nums1[i]);
                i++;
            } else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m) {
            nums3.push_back(nums1[i]);
            i++;
        }

        while (j < n) {
            nums3.push_back(nums2[j]);
            j++;
        }

        nums1 = nums3;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Example input
    int m = 3; // Number of elements in nums1
    vector<int> nums2 = {2, 5, 6}; // Example input
    int n = 3; // Number of elements in nums2

    solution.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
