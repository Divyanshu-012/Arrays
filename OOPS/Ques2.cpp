#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }
};

// Single Inheritance
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
    }
};

// Multilevel Inheritance
class GermanShepherd : public Dog {
public:
    void guard() {
        cout << "German Shepherd is guarding." << endl;
    }
};

// Multiple Inheritance
class Bird {
public:
    void fly() {
        cout << "Bird is flying." << endl;
    }
};

class FlyingDog : public Dog, public Bird {
public:
    // Inherits both Dog and Bird functionalities
};

// Hybrid Inheritance
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing." << endl;
    }
};

class FlyingCat : public Cat, public Bird {
public:
    // Inherits from Cat and Bird
};

// Hierarchical Inheritance
class Tiger : public Animal {
public:
    void roar() {
        cout << "Tiger is roaring." << endl;
    }
};

class Lion : public Animal {
public:
    void roar() {
        cout << "Lion is roaring." << endl;
    }
};

int main() {
    // Single Inheritance
    Dog myDog;
    myDog.eat();
    myDog.bark();

    // Multilevel Inheritance
    GermanShepherd myGermanShepherd;
    myGermanShepherd.eat();
    myGermanShepherd.bark();
    myGermanShepherd.guard();

    // Multiple Inheritance
    FlyingDog myFLD;
    myFLD.eat();
    myFLD.bark();
    myFLD.fly();

    // Hybrid Inheritance
    FlyingCat myC;
    myC.eat();
    myC.meow();
    myC.fly();

    // Hierarchical Inheritance
    Tiger myT;
    myT.eat();
    myT.roar();

    Lion myL;
    myL.eat();
    myL.roar();

    return 0;
}
