#include<iostream>
using namespace std;
int maxNum(int arr[],int size){
    int Maximum =INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        Maximum = max(Maximum,arr[i]);
    }
    return Maximum;
}
int main(){
    int n ;
    cout<<"Enter the number of an array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the element of an array"<<endl;
    for (int  i = 0; i < n; i++)
    {
       cin>>array[i];
    }
    
   int max= maxNum(array,n);
    cout<<"Max number of an array "<<" "<<max<<endl;
    return 0;
}