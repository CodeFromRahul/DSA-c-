#include<iostream>
using namespace std;
int leftOccurance(int arr[],int size,int key){
    int s = 0;
    int e =size-1;
    int mid =s+(e-s)/2;
    int ans =-1;
    while (s<=e)
    {
       if(arr[mid]==key){
        ans = mid ;
        e = mid-1;
       }


       else if (arr[mid]<key)
       {
        s=mid+1; 
       }
       else{
        e=mid -1;
       }
       
       mid = s+(e-s)/2;

    }
    return ans;

    
}

int rightOccurance(int arr[],int size ,int key){
    int s= 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    int ans =-1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
           ans = mid ;
           s=mid+1;

        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
      mid = s+(e-s)/2;
        
    }
    
      return ans ;


}

int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int array[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int key ;
    cout<<"Enter the key of an array"<<endl;

    cin>>key;
   int left= leftOccurance(array,n,key);
    cout<<"Left occurance :"<<" "<<left<<endl;
    int right = rightOccurance(array,n,key);
    cout<<"Right Occurance"<<" "<<right<<endl;
    return 0;
}