#include<iostream>
using namespace std;
 int insersion(int arr[],int n){
    int round =1;
    for (int  i = 1; i <n-1; i++)
    {
        int temp =arr[i];
        int j = i-1;
        for (; j>=0 ;j--)
        {
            if (arr[j]>arr[i]){
                arr[j+1]=arr[j];
            }
            
            
        }
        
        arr[j+1] =temp;
    }
    

    
    
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
    int sort = insersion(arr,n);
    cout<<sort<<endl;

    
    return 0;
}