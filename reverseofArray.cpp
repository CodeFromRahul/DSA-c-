#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}

    
int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;

    int array[size];
    cout<<"Enter the element of an array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];

    }
    cout<<"Array Before Reversing"<<" ";

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
   cout<<"After Reversing an array"<<" ";
    reverseArray(array,size);
    printArray(array,size);
    
    return 0;
}