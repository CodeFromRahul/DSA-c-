#include<iostream>
using namespace std;

int reverse(char name[],int n){
    int s= 0;
    int e = n-1;
    while (s<e)
    {
       swap(name[s++],name[e--]);
    }
    
}
int getLength(char name[]){
    int count =0;
    for (int  i = 0; name[i]!='\0'; i++)
    {
       count++;
    }
    return count;
    
}
int main(){
    char ch[20];
    cout<<"Enter your name"<<endl;
    cin>>ch;
    // cout<<"Your name is "<<ch<<endl;
    int length = getLength(ch);
    cout<<"Size of name " <<length<<endl;
    reverse(ch,length);
    cout<<"After reversing "<<ch;
    return 0;
}