#include<iostream>
using namespace std;

int main(){
    // pattern

    int i=1;
    int n ;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;

    // while (i<=n)
    // {
    //    int j=1;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }
    
    // while (i<=n)
    // {
    //    int j=i;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }

    // while (i<=n)
    // { 
    //     int j=1;
    //     while (j<=n)
    //     {
    //         cout<<j;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
        
    // }
    
    // while (i<=n)
    // {
    //    int j=1;
    //    while (j<=n)

    //    {
    //     cout<<n-j+1;
    //     j=j+1;
    //    }

    //    cout<<endl;
    //    i=i+1;
       
    // }
    
//    int  count =1;
//    while (i<=n)
//    {
//     int j=1;
//     while (j<=n)
//     {
//        cout<<count<<" ";
//        j=j+1;
//        count=count+1;

//     }
//     cout<<endl;
//     i=i+1;
    
//    }
   
   while (i<=n)
   {
    int j=1;
    while (j<=i)
    {
       cout<<"*";
       j=j+1;
      

    }
    cout<<endl;
    i=i+1;
    
   }
   


    return 0;
}