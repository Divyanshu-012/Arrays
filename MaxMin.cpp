#include<iostream>
using namespace std;


int main(){

    int size;
    cin>>size;

    int arr[100];

    for(int i = 0;i<size; i++){
        cout<<"enter:"<<i<<" ";
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    int min= INT_MAX;
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }

    cout<<" max:"<<max<<endl;
    cout<<" min:"<<min;
}