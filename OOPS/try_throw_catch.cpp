#include<iostream>
using namespace std;

int main(){
    float a,b,c;

    cout<<"enter two no."<<endl;
    cin>>a>>b;


    try{
        if(b!=0){
            c=a/b;
            cout<<c<<endl;
        }
        else{
            throw(b);
        }
    }    
    catch(float b){
        cout<<"divide by"<<b<<"error";
    }
    return 0;
}