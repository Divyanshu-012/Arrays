#include<iostream>
using namespace std;


// void printArray(int arr[], int n){

//     for(int i= 0;i<n;i++){
//         cout<<arr[i];
//     }
// }

int  binary(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    // int mid = (start+ end)/2
    int mid= start + ( end-start)/2; // this formula will save us from going away from the range of int 2^31 -1

    while(start<=end){
        if(arr[mid] == key ){
            return mid;
        }
        else if(arr[mid]> key){
            end = mid-1;



        }else{
            start = mid+1;
        }

        mid= start + ( end-start)/2;
    
    
    

    }
    return -1;
    
        

}

int main(){
    int arr[5] = {3,5,9,13,24};
    int index = binary(arr,5,13);
    cout<<"index of 13 is "<< index <<endl;


}