#include<iostream>
using namespace std;

// Parametrized recursion 
void function(int i,int sum){
    if(i<1) {
        cout<<sum<<endl;
        return;
    }

    function(i-1,sum+i);



}

int main(){
    function(3,0);
}
