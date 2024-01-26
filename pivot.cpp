#include<iostream>
using namespace std;
int pivotIndex(int arr[],int n){
    int s =0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
       if(arr[mid]>=arr[0]){
        s=mid+1;
       }
       else{
        e=mid;
       }
       mid =s+(e-s)/2;
    }
    return s ;
}
int main(){
    
    int arr[5]={1,3,12,5,13};
    int pivot = pivotIndex(arr,5);
    cout<<"The pivot index is "<<pivot<<endl;
    return 0;
}