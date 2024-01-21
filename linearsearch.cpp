#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
  for(int i =0; i<size;i++){
    if(arr[i]==key){
        return true;
    }
  }
  return false ;
}

int main(){
  int n ;
  cout<<"Enter the Size of an array"<<endl;
  cin>>n;
  int array[n];
  cout<<"Enter the element of an aaray"<<endl;
  for (int i = 0; i <n; i++)
  {
    cin>>array[i];
  }
 int key;
 cout<<"Enter the key "<<endl;
 cin>>key;
  bool found =linearSearch(array,n,key);

  if(found){
    cout<<key<<" is present in an array"<<endl;
  }
    else{
        cout<<key<<" does not found"<<endl;
    }
    
    return 0;
}