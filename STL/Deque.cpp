#include<iostream>
#include<deque>
using namespace std;

int main(){
   deque<int> d;
   d.push_back(2);
   d.push_front(1);

   for(int i:d){
    cout<<" "<<i;
   }

   d.pop_back();
   cout<<endl;
   for (int i:d)
   {
      cout<<i;
   }
   
    return 0;
}