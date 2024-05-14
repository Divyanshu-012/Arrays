#include<iostream>
using namespace std;

class rectangle {

public:

    int l;
    int b;
    rectangle() // no arguments passed
    {
        l= 0;
        b= 0;
        // cout<<l<<"-"<<b<<endl;

    }
    rectangle(int x, int y) // no arguments passed ---> parametrised constructor
    {
        l= x;
        b= y;
        cout<<l<<"-"<<b<<endl;

    }
    rectangle(rectangle& r)  // copy constructor
    {
        l=r.l;
        b=r.b;
        //cout<<l<<"-"<<b<<endl;



    }

    ~rectangle(){
        cout<<"destructor is called"<<endl;
    }


};

int main(){
    rectangle *r1 = new  rectangle();  // didn't invoke but yet constructor called
    cout<<r1->l<<"-"<<r1->b<<endl;
    delete r1;
    rectangle r2(3,4);  // arguments called
    r2.l;
    r2.b;

    rectangle r3 = r2;
    cout<<r3.l<<r3.b<<endl;  // another way of printing things

}