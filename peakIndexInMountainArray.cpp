#include<iostream>
using namespace std;
int PeakMountain(int arr[],int size){
    int s =0;
    int e = size-1;
    int mid = s+(e-s)/2;

    while (s<e)
    {
       if(arr[mid]<arr[mid]+1){
        s=mid+1;
       }
       else{
        e=mid;
       }
       mid =s+(e-s)/2;
    }
    return s;
    
}
int main(){

    int n;
    cout<<"Enter th size of an array"<<endl;
    cin>>n;

    cout<<"Enter the element of an array"<<endl;

    int array[n];

    for (int  i = 0; i <n; i++)
    {
       cin>>array[i];
    }

    int peak = PeakMountain(array,n);

    cout<<"The peak index of an array is "<<peak<<" ";

    
    

    return 0;
}