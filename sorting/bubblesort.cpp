#include<iostream>
using namespace std;
int  bubblesort(int arr[],int n){

    for (int  i = 0; i <n; i++)
    {
        for (int j = 0; j <n-i; j++)
        {
            if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        }
        
    }
        
        for (int  i = 0; i <n; i++)
        {
           cout<<arr[i];
        }
        
       
        
        
    
}
int main(){
    int n ;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the lement of ana arra"<<endl;

    for (int  i = 0; i <n; i++)
    {
       cin>>arr[i];
    }

    int bubble = bubblesort(arr,n);
    cout<<bubble<<endl;

    

    return 0;
}