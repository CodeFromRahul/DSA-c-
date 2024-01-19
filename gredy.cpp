#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    int rem = n/100;
    cout<<"You required "<<rem<<" notes of 100"<<endl;
    
    int twenty = n-rem*100;
    int tnotes = twenty/20;
    cout<<"You Required "<<tnotes<<" notes of 20"<<endl;

    int one = twenty-tnotes*20;
    int onotes = one/1;
    cout<<"You Required "<<onotes<<" notes of 1"<<endl;


return 0;
}