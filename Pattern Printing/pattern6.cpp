#include<iostream>
using namespace std;
int main(){



             /*
                 1
                 22      
                 333
                 4444
                        */


    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< i<<" ";
            j++;
        }
        cout<<endl;
        i=i+1;
    }
}