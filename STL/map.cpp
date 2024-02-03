#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    m[12]="Rahul",
    m[13]="vishwakrma",
    m[14]="bhai";

    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    return 0;
}