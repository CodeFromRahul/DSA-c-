#include<iostream>
using namespace std;

void reverse(char name[],int n ){
    int s =0;
    int e = n-1;
    if(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int lengthString(char name[]){
    int count = 0;
    for (int  i = 0; name[i]!='\0'; i++)
    {
      count++;
    }
    return count;
    
}

int main(){

    char  name[10];
    cout<<"Enter Your name "<<endl;
    cin>>name;
    cout<<name<<endl;
    int length =lengthString(name);
    cout<<"The length is "<<length<<endl;

   reverse(name,length);

   cout<<"Your reverse name is "<<name<<endl;

    
    return 0;
}