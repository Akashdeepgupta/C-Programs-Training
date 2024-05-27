/*
AUTHOR: Akashdeep Gupta
First Missinh integer
DOC: 27th May 2024
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap (int *, int,  int);
void printArr(int *, int);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        printf("Enter the value of the %d element of the array\n",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i =0;i<n;i++){
        int idx = arr[i];
        int stop = 0;
        while(i != arr[i] && arr[i]<n){
            swap(arr,i,idx);
            idx = arr[i];
        }
    }

    for(int i = 0;i<n;i++){
        if(i!=arr[i]){
            printf("The First missing element is : %d\n",i);
            return EXIT_SUCCESS;
        }
    }

    printf("The first Missing element is : %d\n",n);

    return EXIT_SUCCESS;
}

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


