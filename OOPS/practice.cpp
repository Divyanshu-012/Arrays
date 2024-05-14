#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animals eat"<<endl;
    }

};


//Sinle Inheritance
class Dog: public Animal{
    
    void bark(){
        cout<<"Dog Barks"<<endl;

    }
};

//Multiple
class cat: public Animal,Dog{
    //inherits functions of both Animal and Dog
};

//Multilevel
class German: public Dog{
    void guard(){
        cout<<"German is a breed of Dog"<<endl;
    }

};

//hybrid


