#include<iostream>      //code for prime no. using while
using namespace std;
int main(){
    int i=1,count,n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count=count+1;

        }

    }


/*if(count=0){
            cout<<"PRIME"<<endl;
        }
        else{
            cout<<"NOT PRIME"<<endl;
}*/

    if(count==2){


        cout<<"PRIME"<<endl;
    }
        
        else{
            cout<<"NOT PRIME"<<endl;

        }


}





    