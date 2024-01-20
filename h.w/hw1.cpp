// #include<iostream>
// using namespace std;
// int update(int n){
//     n =n/2;

// }
// int main(){
//     int a =10;
//     update(a);
//     cout<<update(a)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
 int update(int a){
    a-=5;
    return a;

 }
int main(){
    int a =10;
    update(a);
    cout<<a;
    return 0;
}