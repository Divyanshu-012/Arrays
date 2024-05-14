#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int i=0;
    int j=1;
    while(i<n){
        if(n%2 == 0){
            swap(arr[i],arr[j]);
            i+=2;
            j+=2;

        }
            
            else{
                swap(arr[i],arr[j]);
                i+=2;
                j+=2;
                if(i==(n-1)){

            //    arr[n-1]=arr[n-1];  
            break;            
                

            }
                

            }
        }
        
        

    }


    // for (int i = 0; i <= n; i += 2)
    // {
    //     if (n % 2 != 0)
    //     {
    //         if (i == (n - 1))
    //         {
    //             arr[n - 1] = arr[n - 1];
    //         }
        
    //     else
    //     {
    //         swap(arr[i], arr[i + 1]);
    //     }
    //     }
    //     else{
    //         swap(arr[i], arr[i + 1]);
    //     }
    // }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i = i + 1)
    {
        cout << arr[i] << " ";
        // cout << arr[i + 1] << " ";
    }cout<<endl;
}

int main()
{

    int crr[6] = {2, 3, 4, 6, 7, 8};
    int brr[5] = {98, 99, 23, 43, 35};

    reverse(crr, 6);
    printArray(crr, 6);

    cout << endl;
    reverse(brr, 5);

    printArray(brr, 5);
}