#include<iostream>
using namespace std;

int factorial(int a ){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact =fact*i;
    }
    return fact;

}

int ncr(int n,int r ){
    int num = factorial(n);
    int denom =factorial(r)*factorial(n-r);
    return num/denom;
}

int main(){
    cout<<"Enter the number "<<endl;
    int n,r;
    cin>>n;
    cin>>r;
    

    // ncr(n,r);
    cout<<"Ans is"<<ncr(n,r);
   
    
    return 0;
}