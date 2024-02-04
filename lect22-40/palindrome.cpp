#include<iostream>
using namespace std;
bool checkPalindrome(char c[],int n ){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
      if(c[s]!=c[e]){
        return 0;
      }
      else{
        s++;
        e--;
      }
      return 1;
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

    char name[20];
    cout<<"Enter the string To check whether its palindrome or not "<<endl;
    cin>>name;
   int  len = getLength(name);


   cout<<"String is palindrome or not"<<checkPalindrome(name,len);



    
    return 0;
}