#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


//  ********** Time limit exceeds for few test cases ********

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         set<vector<int>> st; // To store unique triplets
        
//         // Iterate through each element
//         for (int i = 0; i < n; i++) {
//             set<int> hashset; // To store elements seen so far starting from i+1
            
//             // Iterate through the remaining elements starting from i+1
//             for (int j = i + 1; j < n; j++) {
//                 int third = -(nums[i] + nums[j]); // Calculate the required third element
                
//                 // If the third element is found in the hashset
//                 if (hashset.find(third) != hashset.end()) {
//                     vector<int> temp = {nums[i], nums[j], third};
//                     sort(temp.begin(), temp.end()); // Sort the triplet
//                     st.insert(temp); // Insert the triplet into the set to avoid duplicates
//                 }
                
//                 hashset.insert(nums[j]); // Insert the current element into hashset
//             }
//         }
        
//         // Convert set of triplets to a vector of vectors
//         vector<vector<int>> ans(st.begin(), st.end());
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int  i = 0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1] ) continue;
            int  j = i+1;
            int  k = n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    vector<int>temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j]==nums[j-1]) j++;
                    while(j < k && nums[k]==nums[k+1]) k--;

                }
                else if(sum< 0 ){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
        
        
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; // Example input
    Solution solution;
    vector<vector<int>> result = solution.threeSum(nums);

    cout << "Unique triplets that sum to zero are:" << endl;
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
