#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    

    while(i<=n){
        int j=1;
        int value=i;
                                //or we can use formula i-j+1
        while(j<=i){
            
            
            cout<<value;
            value=value-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}