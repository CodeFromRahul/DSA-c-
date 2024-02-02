#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <string> s;
    s.push("Rahul");
    s.push("VISHWAKARMA");
    s.push("HARSH");

    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"The size of an stack"<<" "<<s.size()<<endl;
    cout<<s.empty();

    return 0;
}