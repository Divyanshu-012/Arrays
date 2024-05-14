#include<iostream>
using namespace std;
int main(){
    int a=123;
    cout<<a<<endl;
    char b='v';
    cout<<b<<endl;
    float f=1.23;
    cout<<f<<endl;
    double d=1.2;
    cout<<d<<endl;
    bool cd= true;
    cout<<cd<<endl;

    int size=sizeof(d);
    cout<<"Size of d is : "<<size <<endl;
    
    int sizee=sizeof(d);
    cout<<"Size of d is: "<<d<<endl;


    int c ='c';/*this concept is called type casting for this we need t learn about Axii Table*/
    cout<<c<<endl;
    char ch=97;
    cout<<ch<<endl;/*typecasting where 97 shows 'a'*/

    char ch1 = 123456;/*char contains 1 byte only means 8 bit which implies maximum vlaue of 2 to
     the power 8 -1 and it will show 64 on the last bit place which according to Axii Tsble means @ */
    cout<< ch1 <<endl;/*typecasting where 64 shows @*/

    bool first=(a>=d);/*relational operators*/
    cout<< first<< endl;

}