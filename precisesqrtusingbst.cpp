#include<iostream>
using namespace std;
 int sqrt(int n ){
    int s =0 ;
    int e = n;
      long long int  ans = -1;
   long long int  mid = s + (e-s)/2;
    while (s<=e)
    {
        int square = mid*mid ;
       if(square == n){
        return mid ;
       }
       if(square<n){
        ans = mid;
        s =mid+1;
       }
       else{
        e=mid-1;
       }
       mid  = s+(e-s)/2;
    }
    return ans ;
 }

 double morePrecision(int n , int precision , int tempsol){
      double factor = 1;
      double ans = tempsol;
      for (int i = 0; i < precision; i++)
      {
       factor = factor/10;
      
      for (double j =ans;j*j<n; j=j+factor)
      {
        ans = j;
      }
      }
      return ans ;
      
 }
    

int main(){
    int n ;
    cout<<"Enter the number "<<endl;
    
    cin>>n;

    int squareroot  = sqrt(n);
   
    cout<<"More precision"<<morePrecision(n,3,squareroot);

    
    return 0;
}