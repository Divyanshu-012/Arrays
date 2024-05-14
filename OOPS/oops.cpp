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
    Hero Dk;
    cout<<"Dk level is "<< Dk.getlevel()<<endl;


    // use setter
    Dk.setlevel('B');

    // Dk.level = 'A';
    Dk.health = 100;
 
    cout<<"health is :"<<Dk.health<<endl;
    //cout<<"level is :"<<Dk.level<<endl;


}