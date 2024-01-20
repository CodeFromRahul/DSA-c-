#include<iostream>
using namespace std;
 bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
 }
int main(){
    int num ;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(isprime(num)){
        cout<<"Number is prime"<<endl;
    }
    else{
        cout<<"Number is not a prime"<<endl;
    }
    
    return 0;
}