/*
AUTHOR: Akashdeep Gupta
Array Sorting
DOC: 24th may 2024
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000


int main(){
	int n;
	printf("Enter the size of the array: \n");
        scanf("%d",&n);
	int arr[n];
	for(int i = 0;i<n;i++){
		printf("Enter the %d element of the array\n",i+1);
		scanf("%d",&arr[i]);
	}

	printf("The Elements of the Array are :\n");

	for(int i = 0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	printf("\nSorting the Array in Ascending order : \n");
	BubbleSortRev(arr,n);
	printf("The Elements of the Array after sorting in Ascending order are :\n");

	for(int i = 0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	return EXIT_SUCCESS;

}

void  BubbleSort(int *arr,int n){
	for(int i = 0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(arr[j] < arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;	
			}
		}
	}
}


void BubbleSortRev(int *arr,int n){
	for(int i = 0;i<n;i++){
		for(int j=1;j<n-i;j++){
			if(arr[j] > arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;	
			}
		}
	}

}





