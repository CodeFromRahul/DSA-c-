#include<iostream>
#include<list>
using namespace std;

int main(){
    
    list <int>a;

    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_front(2);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
   cout<<a.size();
   cout<<endl;
    
    list <int> l(a);
    for(int i:l){
        cout<<i;
    }
    cout<<endl;

    list <int>b(100,3);
    for(int i:b){
        cout<<i<<" ";
    }


    return 0;
}