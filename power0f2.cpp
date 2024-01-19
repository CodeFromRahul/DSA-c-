#include<iostream>
using namespace std;

int main(){
    int ans =1;
    int n ;

    cout<<"Enter the number of n "<<endl;
    cin>>n;
      
    for (int i = 0; i < 30; i++)
    {
         if(ans == n){
       cout<<"true";
        break;
       }
      
       ans = ans*2;
     
    
    }
      
       cout<<"false";
    
    return 0;
}