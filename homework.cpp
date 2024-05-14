#include<iostream>
using namespace std;
int main(){

    /*int a=9;
    int b=a+1;

    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }*/


    /*int a=9;
    if(a==9){
        cout<<"niney"<<endl;

    }
    if(a>0){
        cout<<"POSITIVE";
    }
    else{
        cout<<"NEGATIVE";
    }*/



    //HOMEWORK CODE-->


    //#include<iostream>
    //using namespace std;
    //int main(){}



    char ch;
    cout<<"Enter a character : "<<endl;
    cin>>ch;
    if(ch>=65&&ch<=90){

        cout<<"UPPERCASE"<<endl;
    }
    if(ch>=97&&ch<=122){
        cout<<"LOWERCASE"<<endl;
    }
    else if(ch>=48&&ch<=57){
        cout<<"DIGIT"<<endl;
    }

}