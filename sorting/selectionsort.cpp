#include<iostream>

using namespace std;
int selectionSort(int arr[],int n ){
    for (int  i = 0; i <n; i++)
    {
        int midIndex = i;
        for (int  j = i+1; j < n-1; j++)
        {
          if (arr[j]<arr[midIndex])
          {
            midIndex=j;
          }
          
        }
        swap(arr[midIndex],arr[i]);
        
    }
    for (int  i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
 selectionSort(arr,n);
    // cout<<"The sorted array is "<<slection<<endl;
    return 0;
}