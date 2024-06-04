#include <iostream>
#include <vector>
#include <map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
    map<int, int> mpp;
    mpp[0] = 1; // To handle the case when the subarray starts from index 0
    int preSum = 0, cnt = 0;

    for (int i = 0; i < nums.size(); i++) {
        preSum += nums[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }

    return cnt;
}

int main() {
    vector<int> nums = {1, 2, 3, -2, 2}; // Example input
    int k = 3; // Example target sum

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
