#include<bits/stdc++.h>
using namespace std;
void printStack(stack<int>v){
   while(!v.empty()){
      cout<<v.top()<<" ";
      v.pop();
   }
   cout<<endl;
}
int main(){
   stack<int>v;
   for(int i=0;i<5;i++){
      v.push(i);
   }
   cout<<"Elements of stack: "<<endl;
   printStack(v);
   v.pop();
   cout<<"Elements of stack after pop operation : "<<endl;
   printStack(v);
   return 0;
}