#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,4>a={2,3,4,2};
    // to print
    for (int  i = 0; i <a.size(); i++)

    {
        cout<<a[i]<<" ";
    }

    // to find element
    cout<<endl<<"Element at position"<<" ";
    cout<<a.at(2)<<endl;
    
    // empty or not

    cout<<"Empty or not"<<a.empty()<<endl;

    // first and last element

    cout<<"First position"<<a.front()<<endl;
    cout<<"last position"<<a.back()<<endl;
    
    return 0;
}