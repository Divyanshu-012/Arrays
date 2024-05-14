#include<iostream>
using namespace std;
int main(){





    /*
              *
             **        code for this pattwern---->
            ***
           ****      
                    */
    int row=1;
    int n;
    cin>>n;
    //while(row<=n){
        //int col=1;
        
        

       /* while(col<=n){

            if(col<=(n-row)){
                cout<<" ";

            }
            if(col>(n-row)){
                cout<<"*";
            }

            col=col+1;
        
        

        }
        cout<<endl;
        row=row+1;
    }*/


    while(row<=n){
        //space print karlo
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }


        //star print karle
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }

}
