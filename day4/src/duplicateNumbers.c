/*
AUTHOR: Akashdeep Gupta
Duplicate numbers
DOC: 27th May 2024
*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    int max = -1;
    for(int i = 0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        int val;
        scanf("%d",&val);
        arr[i] = val;
        if(val > max){
            max = val;
        }
    }
    int hashArr[max+1];
    memset(hashArr, 0, (max+1) * sizeof(int));
    int size = 0;
    for(int i=0;i<n;i++){
        hashArr[arr[i]]++;
    }
    
    for(int i = 0;i<max+1;i++){
        if(hashArr[i] > 1){
            size++;
        }
    }
    int sol[size];
    int ptr = 0;
    for(int i = 0;i<max+1;i++){
        if(hashArr[i] > 1){
            sol[ptr++] = i;
        }
    }
    printf("all the duplicates elements are :\n");
    for(int i = 0;i<size;i++){
        printf("%d\t",sol[i]);
    }
    
    return EXIT_SUCCESS;
}
