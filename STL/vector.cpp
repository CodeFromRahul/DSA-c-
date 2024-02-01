#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    // for (int  i = 0; i <v.capacity(); i++)
    // {
    //     cin>>v[i];
    // }

    v.push_back(1);
    

    // to find capacity
    cout<<"capacity ->"<<v.capacity()<<endl;
    v.push_back(2);
    

    // to find capacity
    cout<<"capacity ->"<<v.capacity()<<endl;
    
    v.push_back(3);
    

    // to find capacity
    cout<<"capacity ->"<<v.capacity()<<endl;
    cout<<v.size();

    cout<<endl<<"Before pop"<<endl;
    for(int i :v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"after  pop"<<endl;
    for(int i :v){
        cout<<i<<" ";
    }cout<<endl;



    // clear

    cout<<"before clear"<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.clear();
    
     cout<<"after clear"<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;
}