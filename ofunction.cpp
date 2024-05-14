#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void Sort(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        while (arr[start] == 0 && start<end)
        {
            start++;
        }
        while (arr[end] == 1 && start<end)
        {
            end--;
        }

        // agar yha pahoch gye ho , iska mtlab
        // arr[i]==1 and arr[j]==0
        if(arr[start]==1 && arr[end]==0  && start<end){

        
        swap(arr[start], arr[end]);
        start++;
        end--;
        }
    }
}

int main()
{
    int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
    Sort(arr, 8);
    printArray(arr, 8);
}