/*
AUTHOR: Akashdeep Gupta
Merge the Sorted Array
DOC: 28th May 2024
*/


#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,m,ptr1=0,ptr2=0,ptr3=0;
    printf("Enter the size of the first Array\n");
    scanf("%d",&n);
    printf("Enter the size of the second Array\n");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    int sol[n+m];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element of the first array\n",i+1);
        scanf("%d",&arr1[i]);
    }
    
    for (int i = 0; i < m; i++) {
        printf("Enter the %d element of the second array\n",i+1);
        scanf("%d",&arr2[i]);
    }
    
    while(ptr1<n && ptr2 <m){
        if(arr1[ptr1] <= arr2[ptr2]){
            sol[ptr3] = arr1[ptr1];
            ptr3++;
            ptr1++;
        }
        else{
            sol[ptr3] = arr2[ptr2];
            ptr3++;
            ptr2++;
        }
    }
    
    while(ptr1<n){
        sol[ptr3] = arr1[ptr1];
        ptr3++;
        ptr1++;
    }
    
    while(ptr2<m){
        sol[ptr3] = arr2[ptr2];
        ptr3++;
        ptr2++;
    }
    printf("The first array is :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    
    printf("The second array is :\n");
    for (int i = 0; i < m; i++) {
        printf("%d\t",arr2[i]);
    }
    printf("\n");
    
    printf("The merged array is: \n");
    for (int i = 0; i < n+m; i++) {
        printf("%d\t",sol[i]);
    }
    printf("\n");
    
    return EXIT_SUCCESS;
}



