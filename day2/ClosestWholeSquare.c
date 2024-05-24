

/*
Author: Akashdeep gupta

Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the userenters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.

DOC : 24th may 2024
*/

#include<stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int root = squareRoot(n);
	int onegreater = root+1;
	int diff1 = n-root*root;
	int diff2 = onegreater*onegreater - n;
	if(diff1 < diff2){
		printf("The answer is : %d\n",root*root);
	}
	else{
		printf("The answer is : %d\n",onegreater*onegreater);
	}

	return EXIT_SUCCESS;

}

int squareRoot(int n){
	int ans;
	for(int i = 1;i<n;i++){
		if(i*i <=n){
			ans = i;
		}
		else{
			break;
		}
	}
	return ans;
}
