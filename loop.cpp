#include<iostream>
using namespace std;
int main(){
    //code to print first five nos. --->

    /* int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }  */
    

    //code for the sum of First n numbers --->



    /*int n;
    int i=1;
    int sum =0;
    cin>>n;
    while(i<=n){
        //i=i+1; if this comes before sum eqn. then answer will be different 
        sum=sum+i;
        i=i+1;
        //cout<<"value of sum is "<<sum<<endl;   ---> if this will be inside loop then it will print all the values 
    }
    cout<<"value of sum is "<<sum<<endl;// and by this will print only the final sum   
    */


   //code for sum of first n even nos.---->

    int n;
    int i=2;
    int sum =0;
    cin>>n;
    while(i<=n){
        //i=i+1; if this comes before sum eqn. then answer will be different 
        sum=sum+i;
        i=i+2;
        //cout<<"value of sum is "<<sum<<endl;   ---> if this will be inside loop then it will print all the values 
    }
    cout<<"value of sum is "<<sum<<endl;// and by this will print only the final sum  
}