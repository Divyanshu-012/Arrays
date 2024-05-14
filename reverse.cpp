#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0;
    int ans=0;
    int n;
    cin>>n;
    while(n!=0){
        int digit=n%10;
        

        ans=(ans*10)+digit;
        if(ans>INT_MAX/10|| ans<INT_MIN/10){
            cout<< 0;
        }
        
        n=n/10;
    }
    cout<<ans;
}