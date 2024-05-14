#include<iostream>
using namespace std;
int main(){
    


    /*A
      BB
      CCC
      DDDD*/



    int n;
    cin>>n;
    int i=1;
    

    while(i<=n){
        int j=1;
        char ch='A'+i-1;        
        
        

        
        
        while(j<=i){
            
            
            cout<<ch;
            ch=ch;
            j=j+1;
        }
        cout<<endl;
        
        i=i+1;
        
    }
}