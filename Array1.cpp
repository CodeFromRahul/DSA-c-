#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;

    cin>>n;

    int array[n];
    cout<<"Enter the element of an array"<<endl;
   
    for (int i = 0; i < n; i++)
    {
       cin>>array[i];
    }
    for (int  i = 0; i < n; i++)
    {
       cout<<array[i]<<" ";
    }
    
    int second[2]={2};
    for (int  i = 0; i < 2; i++)
    {
        cout<<endl<<second[i]<< " ";
    }
    
    return 0;
}