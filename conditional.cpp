#include<iostream>
using namespace std;
int main(){
    /*int a;
    cin>>a;

                                                upar ke comment maaar diya hu taaki niche v use kr saku
    if(a>0){
        cout<<"A is positive"<<endl;
    }
    else{
        cout<<"A is negtive "<<endl;
    }*/


    
    int a,b;
    //cin>>a>>b;
    //a=cin.get();//cin.get() ki help sei tab enter space sab ko kr skate hai input mei 

    //cout<<" value of a and b is "<<a <<"  "<<  b <<endl;
    //cout<<" value of a is : " << a << endl;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    
    if (a>b){
        cout<<"A is greater"<<endl;

    }
    else if(b>a){
        cout<<" B is greater"<<endl;
    }
    else{
        cout<<"A is equal to B"<<endl;
    }


}