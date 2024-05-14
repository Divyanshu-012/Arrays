#include<iostream>
#include<queue>
using namespace std;

void Queue(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.front()<<endl; //prints 1
    cout<<q.back()<<endl; // prints 4
    q.pop(); // {2,3,4}
    cout<<q.front()<<endl;  
}
int main(){

    Queue();
}