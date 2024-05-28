/*
AUTHOR: Akashdeep Gupta
Right Shift elements by k
DOC: 28th May 2024
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseArray(int [], int , int );

int main(){
    int n,k;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of K\n");
    scanf("%d",&k);
    k=k%n;

    reverseArray(arr,0,n-1);
    reverseArray(arr,k,n-1);
    reverseArray(arr,0,k-1);
    
    ifor(int i =0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return EXIT_SUCCESS;
}

void reverseArray(int arr[],int start,int end){
    int i,j;
    for(i = start,j=end; i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


