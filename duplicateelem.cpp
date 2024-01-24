#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    int ans =0;
    for (int  i = 0; i <size; i++)
    {
       ans =ans^arr[i];
    }
    for (int  i = 1; i <size ; i++)
    {
        ans = ans^i;
    }
    return ans;
    
}
int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the Element of an array"<<endl;
    for (int  i = 0; i <n; i++)
    {
        cin>>array[i];
    }
    int duplicateelem = duplicate(array,n);
    cout<<"Duplicate Element is"<<" "<<duplicateelem<<endl;
    return 0;
}