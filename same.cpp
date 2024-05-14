#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int ans=0;int n;
    int i=0;
    while(n!=0){
        int digit;
        digit=n&1;
        ans=(digit*pow(10,i)+ans);

        i=i++;
        n=n>>1;

    }
    cout<<ans;
}