// #include<iostream>
//   using namespace std;

// class Solution {
//     private :
//     bool validChar(char ch){
//         if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
//             return 1;
//         }

//         return 0;
//     }


//     char toLowercase(char ch){
//         char temp;
//         if((ch>='a'&&ch<='z' )|| (ch>='0'&&ch<='9')){
//           return ch;
//         }
//         else
//             temp = ch-'A'+'a';
//         return temp;
//         }
//     }


//     bool checkPalindrome(string c){
//     int s = 0;
//     int e = c.length()-1;
//     while (s<=e)
//     {
//       if(c[s]!=c[e]){
//         return 0;
//       }
//       else{
//         s++;
//         e--;
//       }}
//       return 1;
//     }
    


// public:

// // faltu ke chije hata do
//     bool isPalindrome(string s) {
//        string temp =" ";
//        for(int j =0;j<s.length();j++){
//            if(validChar(s[j])){
//              temp.push_back(s[j]);
//            }


//        } 

//        for(int j =0 ; j<temp.length();j++){
//            temp[j]=toLowercase(temp[j]);
//        }
//        return checkPalindrome(temp);
//     }
// };


// int main(){
//     string str;
//     cout<<"Enter the string ";
    
//     cin>>str;

//     cout<<str;
//     return 0;
// }