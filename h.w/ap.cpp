#include<iostream>
using namespace std;
int ap(int n){
    int series = (3*n+7);
    return series;
}
int main(){
    int num;
    cout<<"Enter the number "<<endl;
    cin>>num;
    cout<<"Ap is "<<ap(num);
    
    return 0;
}