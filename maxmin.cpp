#include<iostream>
using namespace std;
int getMax(int arr[],int n){

int max = INT16_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i]>max);
    {
        max=arr[i];
    }
    
  }
  return max;
}

int getMin(int min[],int n){
    int minimum = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min[i]<minimum){
            minimum=min[i];
        }
       }
        return minimum;
    }
    
int main(){
    int size ;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element"<<endl;
    int arr[size];
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
   int max = getMax(arr,size);
    cout<<"Maximum Number of the array"<<" "<<max<<endl;
   int min = getMin(arr,size);
    cout<<"minimum Number of the array"<<" "<<min<<endl;
    return 0;
}