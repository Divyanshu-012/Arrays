#include<iostream>
#include<math.h>
using namespace std;
int main(){
     int n;
     cin>>n;
    int ans=1;
    int p;
    for(int i=0;i<=30;i++){

        int ans=pow(2,i);
        if(ans==n){
            p=1;
            break;
        }
        else{
            p=0;
        }

        //ans=ans*2;
    }

    if(p==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    //    //    OR 2nd way

    //    int ans=1;
    //    if(ans==n){
    //     return true;
    //    }
    //    if(ans< INT_MAX/2){
    //     ans=ans*2;

    //     }
    //     return false;
       


}

    


    

        

    
    
