#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void  alternateArray(int arr[],int size){
 for (int  i = 0; i < size; i=i+2)
 {
    if((i+1)<size){
        swap(arr[i],arr[i+1]);
    }
 }
 
}

int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the element of an array"<<" ";
    for (int  i = 0; i < n; i++)
    {
      cin>>array[i];
    }

    alternateArray(array,n);
    printArray(array,n);
    

    return 0;
}