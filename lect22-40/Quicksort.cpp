#include<stdio.h>
#include<conio.h>

int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high-1;j++){
        if(arr[j]<pivot){
            i=i+1;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i+1);
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quicksort( arr,low,p-1);
        quicksort( arr,p+1,high);
    }
}


int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int high=n;
    int low=0;

    quicksort(arr,0,n-1);
    printf("Array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}
