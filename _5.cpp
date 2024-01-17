#include<iostream>
using namespace std;

int main(){
    // sum of n number
    // int n ;
    // cin>>n;
    // int sum =0;
    // for (int  i = 1; i <=n; i++)
    // {
    //    sum+= i;
       

    // }
    //    cout<<sum<<endl;

    // fibonacchi series

    // int n ;
    // cout<<"Enter the number "<<endl;
    // cin>>n;
    // int a=0;
    // int b=1;

    // cout<<a<<" "<<b<<" ";

    // for(int i=0;i<n;i++){
    //     int nextfib = a+b;
    //     cout<<nextfib<<" ";
    //     a=b;
    //     b=nextfib;

    // }

    // to check whether the given number is prime or not

    int n ;
    cout<<"Enter the number "<<endl;
    cin>>n;

    bool innumber =1;

    for(int i =2 ; i<n ; i++){

        if (n%i==0)
        {
            // cout<<"The number is not a prime number "<<endl;
            innumber = 0;
            break;
        }

      
        
    }

    if(innumber==0){
        cout<<"not a prime number ";
    }

    else{
        cout<<"Is a prime number ";
    }

    
    return 0;
}