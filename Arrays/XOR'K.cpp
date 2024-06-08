#include <iostream>
#include <vector>
#include <map>

using namespace std;

int subarraysWithSumK(vector<int> a, int b) {
    int n = a.size(); // size of the given array
    int xr = 0;
    map<int, int> mpp; // declaring the map
    mpp[xr]++; // setting the value of 0
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        // prefix XOR till index i
        xr = xr ^ a[i];

        // By formula: x = xr^b
        int x = xr ^ b;

        // add the occurrence of xr^b to the count
        cnt += mpp[x];

        // Insert the prefix xor till index i into the map
        mpp[xr]++;
    }
    return cnt;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5}; // Example input
    int b = 6; // Example target sum

    int result = subarraysWithSumK(a, b);
    cout << "Number of subarrays with XOR sum " << b << " is: " << result << endl;

    return 0;
}
