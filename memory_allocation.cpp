#include<iostream>
using namespace std;

class Hero{

    private:
    char level;

    public:
    int health;


    //use of getter


    char getlevel(){
        return level;
    }

    void setlevel(char ch){
        level =ch;
    }

};

int main(){

    //static memory alocation
    Hero Dk;
    cout<<"Dk level is "<< Dk.getlevel()<<endl;
    cout<<"health is :"<<Dk.health<<endl;


1
 
    



}