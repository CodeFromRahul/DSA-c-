#include<iostream>
using namespace std;

int getLength(char name[]){
    int count =0;
    for (int  i = 0; name[i]!='\0'; i++)
    {
       count++;
    }
    return count;
    
}

int main(){
   
   
    char arr[20];
     cout<<"Enter the Size of an character array"<<endl;
     cin>>arr;

    
      int length = getLength(arr);
      cout<<"Length of an entered array"<<length<<endl;
    
    return 0;
}