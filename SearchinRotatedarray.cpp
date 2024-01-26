#include<iostream>
using namespace std;
int binarySearch(int arr[],int s , int e , int target){
    int start = s;
    int end = e;
    int mid = start+(end-start)/2;

    while (start<end)
    {
        if(arr[mid]==target){
            return mid ;
        }
        else if(arr[mid]<target){
            start =mid +1 ;

        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;

    }
    return s;
    
}

int pivotSearch(int arr[],int start,int end ){
    int s = start;
    int e = end;
    int mid = s+(e-s)/2;
    while (s<e)
    {
       if(arr[mid]<arr[0]){
        s = mid+1;
       }
       else{
        e = mid;
       }
       mid = s+(e-s)/2;
    }
    return s;
}

int rotatedArray(int arr[],int size , int target){
    int s =0;
    int e =size-1;
    int mid = s+(e-s)/2;
    int pivot = pivotSearch(arr,s,e);
    ;

    while (s<e)
    {
       if (arr[pivot]<mid && arr[size]>mid )
       {
        return binarySearch(arr,pivot,e,target);
       }
       else{
        return binarySearch(arr,0,pivot-1,target);
       }
    }
    

}

int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    cout<<"Enter the element of an array"<<endl;
    int array[n];
    for (int  i = 0; i < n; i++)
    {
       cin>>array[i];
    }

    int key;
    cout<<"Enter the key of an array"<<endl;
    cin>>key;
    int search = rotatedArray(array,n,key);
    cout<<" Search in Rotated array is "<<search<<endl;
    
    return 0;
}