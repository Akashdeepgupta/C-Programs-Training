/*
AUTHOR: aKASHDEEP GUPTA
Leader Array
DOC: 24th May 2024
 */

#include <stdio.h>
#include <stdlib.h>

int main() {    
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }
    int sol[n];
    int ptr = 0;
    int max = -1;
    for(int i = n-1;i>=0;i--){
        if(arr[i] > max){
            max = arr[i];
            sol[ptr++] = max;
        }
    }
    printf("the Solution is: ");
    for(int i = 0;i<ptr;i++){
        printf("%d\t",sol[i]);
    }
    
    
    return EXIT_SUCCESS;
}
