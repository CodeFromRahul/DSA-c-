#include<iostream>
using namespace std;
void array(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Printing Done"<<endl;
}
int main(){
    int n=4 ;
    // cout<<"Enter the number of ELement"<<endl;
 
    int arr[4]={12,34,23,34};
    array(arr,n);
    int sizeofarr = sizeof(arr)/sizeof(int);
    cout<<"Size of Array is "<<sizeofarr<<endl;

    char ch[5]={'w','q','e','t','v'};
    for (int i = 0; i < 5; i++)
    {
        cout<<endl<<ch[i]<<" ";
    }
    
    return 0;
}