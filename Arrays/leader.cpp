#include <iostream>
#include <vector>
#include <algorithm> // For reverse

using namespace std;

vector<int> leaders(int a[], int n) {
    vector<int> ans;
    
    // Last element is always a leader
    int max = a[n - 1];
    ans.push_back(max);

    // Traverse from second last to the first element
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= max) {
            ans.push_back(a[i]);
            max = a[i];
        }
    }

    // Reverse to get the leaders in correct order
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int a[] = {16, 17, 4, 3, 5, 2}; // Example array
    int n = sizeof(a) / sizeof(a[0]);

    vector<int> result = leaders(a, n);

    cout << "Leaders in the array: ";
    for (int leader : result) {
        cout << leader << " ";
    }
    cout << endl;

    return 0;
}
