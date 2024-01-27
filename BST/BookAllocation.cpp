#include<iostream>
using namespace std;
bool isPossible(int arr[],int n , int m , int mid){
    int studentCount =1;
    int pageCount = 0 ;
    for (int  i = 0; i <n; i++)
    {
       if(pageCount+arr[i]<=mid){
            pageCount += arr[i];
       }
       else{
        studentCount++;

        if(studentCount>m || arr[i]>mid){
            return false;
        }
        pageCount =arr[i];
       }

    }
    return true;
}

int allocateBook(int arr[],int n , int m ){
    int s = 0;
    int sum =0;
    for (int  i = 0; i < n; i++)
    {
       sum+=arr[i];
    }
    int e =sum;
    int mid = s+(e-s)/2;
    int ans =-1;
     
     while (s<=e)
     {
        if(isPossible(arr,n,m,mid)){
            ans = mid ;
            e = mid -1;

        }
        else{
            s = mid+1;
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
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i <n; i++)
    {
       cin>>array[i];
    }

    cout<<"Enter the number of students"<<endl;
    int page;
    cin>>page;

    int allocatate = allocateBook(array,n,page);
    cout<<"After allocation "<<allocatate<<endl;

    
    
    return 0;
}