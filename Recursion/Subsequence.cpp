#include <iostream>
#include <vector>
using namespace std;

// Function to print a vector
void print(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to generate all subsets
void f(int ind, vector<int>& arr, const vector<int>& original) {
    if (ind >= original.size()) {
        print(arr);
        return;
    }
    // Include the current element
    arr.push_back(original[ind]);
    f(ind + 1, arr, original);
    // Exclude the current element
    arr.pop_back();
    f(ind + 1, arr, original);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> original(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> original[i];
    }

    vector<int> arr;
    f(0, arr, original);

    return 0;
}









