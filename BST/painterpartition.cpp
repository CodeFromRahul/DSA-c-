#include<iostream>
using namespace std;
bool partion(int arr[],int n ,int m ,int mid){
    int paintercount =1;
    int wallcount=0;
    for (int  i = 0; i <n; i++)
    {
        if (wallcount+arr[i]<=mid)
        {
            wallcount+=arr[i];
        }
        else{
            paintercount++;
            if (arr[i]>mid ||paintercount>m )
            {
                return false;
            }
            wallcount=arr[i];
        }
        return true;
    }
    
}

int painter(int arr[],int n , int m ){
    int s =0;
    int ans =-1;
    int sum =0 ;
    for (int  i = 0; i <n; i++)
    {
        sum+=arr[i];
    }

    int e = sum;
    int mid = s+(e-s)/2;
    while (s<=e)
    {
        if (partion(arr,n,m,mid)){
            ans = mid ;
            e =mid-1;
        }
        else{
            s =mid+1;
        }

        mid =s-(e-s)/2;
    }


    return ans ;
    
}
        

    
        
int main(){
    
    int n ;
    cout<<"Enter the number of element "<<endl;
    cin>>n;

    cout<<"Enter the Element of an array"<<endl;
    int arr[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    int m ;
    cout<<"Enter the key"<<endl;
    cin>>m;

    int painterSolution = painter(arr,n,m);
    cout<<"Enter the element "<<painterSolution<<endl;

    return 0;
}


    


