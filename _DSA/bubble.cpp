
#include<iostream>
using namespace std;
 
 void bubbleSort(int arr[],int n){
    for (int i=1;i<n;i++){
        for(int j =0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }
 }

int main(){

    int n ;
    int arr[n];
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i <n-1; i++){
        cin>>arr[i];
    }
    
    
    return 0;
}