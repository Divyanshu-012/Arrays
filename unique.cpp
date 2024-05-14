#include <iostream>
using namespace std;







int main()
{
    // int n;

    int arr[7] = {1, 2, 3, 2, 3, 4, 4};
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^arr[i];
        cout<<ans;


    }
    // return ans;
    //cout<<ans;


    
}