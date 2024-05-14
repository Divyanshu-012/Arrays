#include<iostream>
#include<fstream>

using namespace std;


int main(){

    string st ="Dk bhai";
    string st2;
    // opening file using constructor and writing it
    // ofstream out("sample.txt");  //write operation
    // out<<st;

    //opening files using constructor and reading it
    ifstream in("sample2.txt");
    // in>>st2;
    getline(in,st2); //here "in" is just a variable
    cout<<st2;

}
