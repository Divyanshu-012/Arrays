#include<iostream>
using namespace std;


void update(int arr[], int n){
    cout<<endl<< "Inside the function"<<endl;

    //updating array's first element
    arr[0]=120;
    arr[1]=30;
    

    //printing
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    cout << "Going back to main function"<<endl;
}



int main(){
    int arr[3]={1, 2, 3};
    update(arr, 3);

    //printing
    cout<<endl<<"Printing in main function"<<endl;
     
    for(int i= 0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    
}