/*
AUTHOR: Akashdeep Gupta
ommon Elements
DOC: 28th May 2024
*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int n,m,k;
    printf("Enter the size of the array1\n");
    scanf("%d",&n);
    int arr1[n];
    for(int i = 0;i<n;i++){
        printf("Enter the %d element of the array1\n",i+1);
        scanf("%d",&arr1[i]);
    }


    printf("Enter the size of the array2\n");
    scanf("%d",&m);
    int arr2[m];
    for(int i = 0;i<m;i++){
        printf("Enter the %d element of the array2\n",i+1);
        scanf("%d",&arr2[i]);
    }

    int hashArr[100000];
    int sol[m],ptr=0,size=0;
    memset(hashArr,0,100000*sizeof(hashArr[0]));
    for(int i = 0;i<n;i++){
        hashArr[arr1[i]]++;
    }

    for(int i = 0;i<m;i++){
        if(hashArr[arr2[i]] >= 1){
            sol[ptr++] = arr2[i];
        }
    }

    printf("The Common Elemnts are: \n");
    for (int i = 0; i < ptr; i++) {
        printf("%d\t",sol[i]);
    }


    return EXIT_SUCCESS;
}




