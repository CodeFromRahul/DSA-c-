#include<iostream>
using namespace std;

  char getMaxOccur(string s){
    int arr[26] = {0};

    for (int  i = 0; i <s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch>='a' &&ch<='z'){
            number = ch-'a';
        }
      else{
        number = ch-'A';
      }

      arr[number]++;
    }

    int maxi = -1 ,ans =0;
    for (int  i = 0; i <26; i++)
    {
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ans;
    return finalAns;
    
        

        
    
  }

int main(){
    string s ;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"maximum Character in a string"<<" ";
    cout<<getMaxOccur(s);
    return 0;
}