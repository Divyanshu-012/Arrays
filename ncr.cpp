#include<iostream>
using namespace std;

int factorial(int n){
    int fact= 1;
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
    return fact;
}
// function Signature
int nCr(int n, int r){

// function body

    int num= factorial(n);
    int denom = factorial(r)* factorial(n-r);

    int answer =  num/denom; 
    return answer;

}

int main(){
    int n ,r ;
    cin>>n>>r;
    int answer = nCr(n,r);  //function Call
    cout<<"Anser is "<<answer<<endl;
}



    




