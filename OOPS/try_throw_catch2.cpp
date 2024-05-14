#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"enter"<<endl;
    cin>>x; 
    try{
        if(x==0){
            throw(x);
        }
        if(x==100){
            throw('e');
        }
        if(x==1000){
            throw(5.5);
        }
    }

    // catch(int x){
    //     cout<<"value is zero "<<x;
    // }
    // catch(char x){
    //     cout<<"value is char"<<x;
    // }
    // catch(float x){
    //     cout<<"value is float"<<x;
    // }
    catch(...){
        cout<<"error"<<endl;
    }
    return 0;
}