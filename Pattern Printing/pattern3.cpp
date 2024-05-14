#include<iostream>
using namespace std;
int main(){


//patern of this form--->
          /*
            4321
            4321
            4321
            4321
                */
    int i=1,n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;  //cout = j if want to print 1234 1234 1234
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}