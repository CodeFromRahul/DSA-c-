#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(12);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(19);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int> ::iterator it = s.begin();
    it++;

    s.erase(it);

    for(int i : s){
        cout<<i<<" ";
    }

    cout<<"Count-->"<<s.count(12);

    return 0;
}