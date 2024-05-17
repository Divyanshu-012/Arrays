#include <iostream>
#include <vector>

using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0; // pointers
    vector<int> Union; // Union vector

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) { // Case 1 and 2
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        } else { // case 3
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    
    while (i < n) { // If any element left in arr1
        if (Union.size() == 0 || Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    
    while (j < m) { // If any elements left in arr2
        if (Union.size() == 0 || Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    
    return Union;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    vector<int> unionArray = findUnion(arr1, arr2, n, m);

    cout << "Union of arrays: ";
    for (int num : unionArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
