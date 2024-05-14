#include<iostream>
using namespace std;
int main(){
    /*int n;
    
    int count=0;
    while(n!=0){
        //checking last bit
        if(n&1) {
            count++;

        }
        n=n>>1;    //right shift
        cout<< count;

    }*/


    int n;
    int remainder,quotient;
    while(n!=0){
        int rem= n%10;
        if(rem==0){
            n=n/10;
            int remainder= n%10;
            int quotient=n/10;
        }
        if(rem==1){
            int remainder=n%10;
            int quotient=n/10;
        }
    }
    cout<<(remainder)+(quotient);
}