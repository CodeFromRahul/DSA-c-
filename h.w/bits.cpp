#include<iostream>
using namespace std;
int numberofBits(int a,int b){
    
    if(a&b==1){
        int num = a&b;
        return num;
    }
    return 0;
}
int main(){
    int c,d;
    cout<<"Enter the number"<<endl;
    cin>>c,d;
    cout<<numberofBits(c,d);

    
    return 0;
}