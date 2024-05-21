#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cnt++;
        } else {
            cnt = 0;
        }

        maxi = max(maxi, cnt);
    }
    return maxi;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);

    cout << "The maximum number of consecutive ones is: " << maxConsecutiveOnes << endl;

    return 0;
}
