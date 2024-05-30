#include <iostream>
#include <vector>
#include <algorithm> // For sort

using namespace std;


// *********  BETTER APPROACH  ***************

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    if (n == 0) return 0;
    
    sort(arr.begin(), arr.end());
    
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int lng = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == lastSmaller + 1) {
            cnt += 1;
            lastSmaller = arr[i];
        } else if (arr[i] != lastSmaller) {
            cnt = 1;
            lastSmaller = arr[i];
        }
        lng = max(lng, cnt);
    }

    return lng;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2}; // Example input
    int n = arr.size();

    int result = lengthOfLongestConsecutiveSequence(arr, n);

    cout << "Length of the longest consecutive sequence: " << result << endl;

    return 0;
}
