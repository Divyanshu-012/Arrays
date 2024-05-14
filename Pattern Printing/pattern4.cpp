#include<iostream>
using namespace std;
int main(){


//pattern of this code---->
    /*
    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
    */
    int i=1,n;
    int count=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        
        }
        cout<<endl;
        i++;

    }
}