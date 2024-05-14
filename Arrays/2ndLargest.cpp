#include <iostream>
#include <climits> // for INT_MIN

using namespace std;

class Solution {
public: 
    // Function returns the second
    // largest element
    int print2largest(int arr[], int n) {
        if (n < 2)
            return -1;
        int large = INT_MIN, second_large = INT_MIN;
        int i;
        for (i = 0; i < n; i++) {
            if (arr[i] > large) {
                second_large = large;
                large = arr[i];
            }
            else if (arr[i] > second_large && arr[i] != large) {
                second_large = arr[i];
            }
        }
        return second_large; 
    }
};

int main() {
    Solution obj;
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int second_largest = obj.print2largest(arr, n);
    cout << "The second largest element is: " << second_largest << endl;
    return 0;
}
