#include <stdio.h> 
#include <stdlib.h> 

int z = 1;

void merge(int arr[], int l, int m, int r, int length) { 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    }
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
    printf("After merge %d\n", z);
    int o;
    for (o = 0; o < length; o++) {
        printf("%d ", arr[o]);
    }
    printf("\n");
    z++;
} 

void mergeSort(int arr[], int l, int r, int length) { 
    if (l < r) { 
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m, length); 
        mergeSort(arr, m + 1, r, length); 
  
        merge(arr, l, m, r, length);
    } 
} 

void printArray(int A[], int size) { 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 

int main() { 
    int n,i,j;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr, 0, n - 1,n); 
    printf("\nSorted array is \n"); 
    printArray(arr, n); 
    return 0; 
}
