#include <iostream>

using namespace std;

int largest(int arr[], int n) {
    int i = 0;
    int j = 1;
    while (j <= n - 1) {
        if (arr[i] > arr[j]) {
            j++;
        } else {
            i = j;
            j++;
        }
    }
    return arr[i];
}

int main() {
    int arr[] = {5, 2, 8, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = largest(arr, n);
    cout << "The largest element in the array is: " << max << endl;
    return 0;
}
