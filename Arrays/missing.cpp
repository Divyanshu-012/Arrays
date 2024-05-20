#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int N = nums.size();
    for (int i = 0; i <= N; i++) {
        // flag variable to check if an element exists
        int flag = 0;

        // Search the element using linear search
        for (int j = 0; j < N; j++) {
            if (nums[j] == i) {
                // i is present in the array
                flag = 1;
                break;
            }
        }

        // check if the element is missing (flag == 0)
        if (flag == 0) return i;
    }

    // The following line will never execute. It is just to avoid warnings.
    return -1;
}

int main() {
    vector<int> nums = {9,6,4,2,3,5,7,0,1};

    int missing = missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}
