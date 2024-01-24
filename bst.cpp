#include<iostream>
using namespace std;
int binarySearch(int array[],int size,int key){
    int start =0;
    int end = size-1;

    int mid =(start+end)/2;
    for (int  i = 0; i < size; i++)
    {
       
  
    if(array[mid]==key){
        return mid;

    }
     if(key<array[mid]){
        end = mid-1;
    }
    else{
        start =mid +1; 
    }
    mid=(start+end)/2;
  }
    
    return -1;
}
int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element in montonic order"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array Before Search"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int key;

    cout<<endl<<"Enter the key to find "<<endl;
    cin>>key;

    int binaryKey=binarySearch(arr,n,key);

    cout<<"Binary key"<<" "<<binaryKey<<endl;
    return 0;
}