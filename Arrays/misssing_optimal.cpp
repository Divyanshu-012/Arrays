#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int N = nums.size();
    int sum = N * (N + 1) / 2;
    int S2 = 0;
    for(int i = 0; i < N; i++) {
        S2 += nums[i];
    }
    return (sum - S2);
}

int main() {
    vector<int> nums = {3, 0, 1};

    int missing = missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}
