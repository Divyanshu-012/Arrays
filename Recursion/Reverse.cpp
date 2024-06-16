#include <iostream>
#include <algorithm>
using namespace std;




void Reverse(int arr[],int l, int r){
    if(l>=r) return ;

    swap(arr[l],arr[r]);
    Reverse(arr,l+1,r-1);
}

int main(){
    int n;
    cout<<"Enter size of arrayy";
    cin>>n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }






    
    Reverse(arr,0,n-1);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;


}