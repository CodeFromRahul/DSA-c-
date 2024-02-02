#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
   q.push("Rahul");
   q.push("bhai");
   q.push("vishwakarma");

   cout<<"Top element"<<q.front();

    return 0;
}