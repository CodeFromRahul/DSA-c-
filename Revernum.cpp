#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int INT_MAX= 2147483647;
    int INT_MIN= -2147483648;
    int ans = 0;
    while (n!=0)
    {
       int digit=n%10;
       if((n>INT_MAX)||(n<INT_MIN)){
       cout<<"0";

       }
    ans =(ans*10)+digit;
    n=n/10;

    }
    cout<<ans;

    
    return 0;
}