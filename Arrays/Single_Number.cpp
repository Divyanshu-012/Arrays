#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int>& nums) {
    int xorr = 0;
    for (int i = 0; i < nums.size(); i++) {
        xorr = xorr ^ nums[i];
    }
    return xorr;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    int unique = findUnique(nums);

    cout << "The unique element is: " << unique << endl;

    return 0;
}
