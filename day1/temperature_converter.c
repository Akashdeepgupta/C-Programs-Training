/*
Author: Akashdeep gupta
Conert temperature from celsius to fahrenheit
DOC : 23rd may 2024
*/

#include<stdio.h>

int main(){
	float temp;
	int choice;
	printf("Press 1 to convert from celsius to fahrenheit\n");
	printf("Press 2 to convert from fahrenheit to celsius\n");
	scanf("%d",&choice);
	if(choice == 1){
		printf("Please Enter the temperature\n");
		scanf("%f",&temp);
		printf("%0.2f degree celsius is equivalent to  %0.2f fahrenheit\n ",temp,(temp*9/5)+32);
	}
	else{
		printf("Please Enter the temperature\n");
		scanf("%f",&temp);
		printf("%0.2f fahrenheit is equivalent to %0.2f degree celsius\n ",temp,(temp-32)*5/9);
	}
	return 0;

}
