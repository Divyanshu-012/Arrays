#include<iostream>
using namespace std;
int main(){
    char ch='1';
    int num=1 ;  // we can use characters also but no floAT or string

    cout<<endl; 
    switch( ch ){

        case 1: cout<< "First"<<endl;
        break;
           //if we wont add break here all the statements below it will also be printed

           

        case '1':switch(num){
            case 1:cout<<"Value of num is "<< num<<endl;
            break;

            
        } 
        break;
   

        default: cout<< "It is default case"<<endl;
    }
    
}