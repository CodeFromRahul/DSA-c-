#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size){
    int sum=0 ;
    for (int  i = 0; i < size; i++)
    {
       sum =sum+arr[i];
    }
    return sum ;
    
}
int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int sum[n];
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i < n; i++)
    {
      cin>>sum[i];
    }

    int arraySum =sumOfArray(sum,n);
    cout<<"The sum of an array "<<" "<<arraySum<<endl;
    
    return 0;
}