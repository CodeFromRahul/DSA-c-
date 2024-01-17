// #include<iostream>
// #include<math.h>
// using namespace std;


// int main() {

//     int n;
//     cin >> n;


//     int ans  = 0;
//     int i = 0;
//     while(n != 0 ) {

//         int bit  = n & 1;

//         ans = (bit * pow(10, i) ) + ans;

//         n = n >> 1;
//         i++;

//     }

//     cout<<" Answer is " << ans << endl;
//     return 0;
// }


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number"<<endl;

    cin>>n;
    int i=0;
    int ans =0;

    while (n!=0)
    {
       int digit = n&1;

       ans = (digit * pow(10,i)+ans);
        n=n>>1;
       i=i+1;
    }

    cout<<ans;
    
    return 0;
}