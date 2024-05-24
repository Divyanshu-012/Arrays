#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> count;
    int maxFreq = 0;
    int maxAns = 0;

    for(int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }
    for(int i = 0; i < arr.size(); i++) {
        if(maxFreq == count[arr[i]]) {
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maximumFrequency(arr, n);
    cout << "Element with maximum frequency: " << result << endl;

    return 0;
}
