#include<iostream>
using namespace std;
int uniqueNumber(int arr[],int size){
    int ans =0;
    for (int  i = 0; i <size; i++)
    {
      ans = ans^arr[i];
    }
    return ans;
}


int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i < n; i++)
    {
       cin>>array[i];
    }
   int unique = uniqueNumber(array,n);
  cout<<"Unique Element is"<<unique<<" "<<endl;
    
    return 0;
}