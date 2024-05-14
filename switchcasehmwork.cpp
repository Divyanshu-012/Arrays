#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int note;
    cout<<"Enter the note u want to know"<<endl;
    cin>>note;

    switch (note){
        case 100 :cout<<"Number of notes req. of 100: "<< (amount/100)<<endl;
        break;

        case 50 : cout<<" Number of notes req. of 50: "<< (amount/50)<<endl;
        break;

        case 10: cout<<"Number of nots req. of 10: "<< (amount/10)<<endl;
        break;

        case 1: cout<<"Number of nots req. of 1: "<<amount/1<<endl;
        break;
    }
}