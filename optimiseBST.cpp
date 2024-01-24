#include<iostream>
using namespace std;
int bst(int arr[],int size,int key){
    int  start = 0;
    int end =  size-1;
    int mid = start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
           return mid ;

        }
        if (key<arr[mid])
        {
            end=mid -1;
        }
        else{
            start = mid+1;

        }
        mid =  start+(end-start)/2;;
        
        
    }

    return -1;
    
}
int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    
    int key ;
    cout<<"Enter the key to find in an array"<<endl;
    cin>>key;
    bst(arr,n,key);
    cout<<"Index of the key :"<<" "<<bst(arr,n,key);

    
    return 0;
}