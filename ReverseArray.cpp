#include<iostream>
// #include<algorithm>
using namespace std;

int main(){
                                                                
    int arr[4] = {1,2,3,4};
    int j= 3;
    int i=0;
    while(i<=j){
        
        swap(arr[i],arr[j]);
        i++;
        j--;
        
         
    }
    for (int k = 0; k < 4; k++) {
        cout << arr[k] << " ";
    }
    
    
}