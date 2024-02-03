#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    cout<<"Finding wheater lement is existing or not"<<binary_search(a.begin(),a.end(),5);

    string abcd="Rahul";
reverse(abcd.begin(),abcd.end());
cout<<abcd;

   rotate(a.begin(),a.begin()+1,a.end());
   for(int i:a){
    cout<<i<<" ";
   }
    cout<<endl;
   sort(a.begin(),a.end());
   for(int i :a){
    cout<<i<<" ";
   }




    return 0;
}