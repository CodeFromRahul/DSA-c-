#include<iostream>
using namespace std;

int main(){

    // bitwise operator
    int a =5;
    int b =12;
    cout<<"a&b  "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<< ~a<<endl;
    cout<<"a^b "<<(a^b)<<endl;

    // right and left shift operator

    cout<<(17<<2)<<endl;
    cout<<(17<<1)<<endl;
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;

    //   increment and decrement operator

    int i =5;
    cout<<++i<<endl;
    cout<<i++<<endl;
    cout<<i--<<endl;
    cout<<--i<<endl;
    return 0;
}