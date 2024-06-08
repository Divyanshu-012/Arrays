#include <iostream>
#include <vector>

using namespace std;

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
