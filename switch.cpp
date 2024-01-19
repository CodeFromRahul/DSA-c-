#include<iostream>
using namespace std;

int main(){
    char num ='a';
    int n = 3;
    switch (num)
    {
    case 1: cout<<"First";
     break;
    case 'a':switch(n){
        case 1:
        cout<<"Wrong number"<<endl;
        break;
       
        
    }
         case 3:
         cout<<"Three";
        break;

    default:
    cout<<"Nothing";
    }

    return 0;
}