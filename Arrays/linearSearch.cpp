#include <iostream>

using namespace std;

int searchInSorted(int arr[], int N, int K) {
    int ans = -1;
    int i = 0;
    while (i < N) {
        if (arr[i] != K) {
            i++;
        } else {
            ans = 1;
            break;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    int result = searchInSorted(arr, N, K);

    if (result == -1) {
        cout << "Element " << K << " is not present in the array." << endl;
    } else {
        cout << "Element " << K << " is present in the array." << endl;
    }

    return 0;
}
