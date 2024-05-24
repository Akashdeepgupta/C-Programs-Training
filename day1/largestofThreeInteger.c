
/*
Author: Akashdeep gupta
largest among three integer
DOC : 23rd may 2024
*/

#include<stdio.h>

int main(){
	int number1;
	int number2;
	int number3;
	int ans;
	printf("Enter the Number1\n");
	scanf("%d",&number1);
	printf("Enter the Number2\n");
	scanf("%d",&number2);
	printf("Enter the Number3\n");
	scanf("%d",&number3);
	ans = number1 > number2 && number1 > number3 ? number1 :0;
	if(ans!=0){
		printf("number1 is the greatest and its value is: %d\n", number1);
	}
	ans = number2 > number1 && number2 > number3 ? number2 : 0;
	if(ans!=0){
		printf("number2 is the greatest and its value is: %d\n", number2);
	}
	ans = number3 > number1 && number3 > number2 ? number3 : 0;
	if(ans!=0){
		printf("number3 is the greatest and its value is: %d\n", number3);
	}
	return 0;

}
