#include<iostream>
using namespace std;
  bool iseven(int n){
    if(n&1){
        return 0;
    }
    return 1;
  }
int main(){
    int num ;
    cout<<"Enter the number "<<endl;
    cin>>num;
    if(iseven(num)){
        cout<<"Even"<<endl;

    }
    else{
        cout<<"odd"<<endl;
    }
    
    return 0;
}