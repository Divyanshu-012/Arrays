#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string name;
//writing the string to the file
    cout<<"enter the name"<<endl;
    cin>>name;
// connecting our file with hout stream
    ofstream hout("sample.txt");
    hout<<name;

    hout.close();

    ifstream in("sample.txt");
    string content;
    in>>content;
    cout<<"the content of this file : "<<content;

}