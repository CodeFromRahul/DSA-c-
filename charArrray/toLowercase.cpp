#include<iostream>
using namespace std;
char toLowercase(char ch){
     if (ch>='a'&& ch>='z')
     {
      return ch;
     }

     else{
        char temp = ch-'A'+'a';
        return temp;
     }
     
       
}
int main(){
    char c;
    cout<<"Enter the character "<<endl;
    cin>>c;
    char low = toLowercase(c);
    cout<<"The lower case "<<low<<endl;
        return 0;
}