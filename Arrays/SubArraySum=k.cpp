#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> sumCount;
    sumCount[0] = 1; // To handle the case when the subarray starts from index 0

    int cumulativeSum = 0;
    int count = 0;

    for(int i = 0; i < nums.size(); i++) {
        cumulativeSum += nums[i];
        
        // Check if (cumulativeSum - k) is in the hashmap
        if(sumCount.find(cumulativeSum - k) != sumCount.end()) {
            count += sumCount[cumulativeSum - k];
        }
        
        // Update the hashmap with the current cumulative sum
        sumCount[cumulativeSum]++;
    }
    
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, -2, 2}; // Example input
    int k = 3; // Example target sum

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << " is: " << result << endl;

    return 0;
}
