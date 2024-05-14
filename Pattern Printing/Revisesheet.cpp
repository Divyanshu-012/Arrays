#include<iostream>
using namespace std;
int main(){
    



//     int n;
//     cin>>n;
//     int i=1;

//     //    *
//     //   **
//     //  ***
//     // ****     
    

//     while(i<=n){
//         int j=1;
               
        
        

        
        
//         while(j<=n){
//             if(j<=(n-i)){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
            
            
//             j=j+1;
//         }
//         cout<<endl;
        
//         i=i+1;
        
//     }
// }

//     int n;  //234
//     cin>>n;
//     int sum =0;
//     int product = 1;
//     while(n!=0){
//         int rem = n%10;  //4
//         sum = rem + sum;
//         product = rem* product;
//         n = n/10 ; //23

//     }
//     cout<<sum<<endl;
//     cout<<product<<endl;
//     cout<<product-sum;
// }

//     int n ;
//     cin>>n;
//     int count = 0;

//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n = n>>1;


//     }
//     cout<<count;
// }
    int ch = 4;
    int arr[ch]= {4,12,8,10};
    int j;
    int i=0;
    int b=j;
    int max;
    while(arr[i]<=ch){
        j=1;
        int compare1= arr[i]>= arr[j];
        if(compare1){
            j++;
            //int compare2 = arr[i]>=arr[j];


        }else{
            i=j;
            j=b+1;

        }
        max = compare1;

        
        cout<<max;


        
        
    }
    
}
