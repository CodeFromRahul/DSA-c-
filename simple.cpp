#include<iostream>
using namespace std;
void printcounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    int n ;
    cout<<"Enter the number"<<endl;
    cin>>n;
    printcounting(n);
    
    return 0;
}