/*
Author: Akashdeep gupta
Simple Calculator
DOC : 23rd may 2024
*/

#include<stdio.h>
int main(){
	char start = 'y';
	char operator;
	while(start != 'n'){
		int number1;
		int number2;
		printf("Enter the first number\n");
		scanf("%d",&number1);
		printf("Enter the second number\n");
		scanf("%d",&number2);
		printf("Please Enter the operator from +, -, *, /, %% ");
		printf("\n");
		scanf(" %c",&operator);
		printf("operator value is : %c\n",operator);
		if(operator == '+'){
			printf("The addition is : %d\n",number1+number2);
		}
		else if(operator == '-'){
			printf("The Subtraction is : %d\n",number1-number2);
		}
		else if(operator == '*'){
			printf("The Multiplication is : %d\n",number1*number2);
		}
		else if(operator == '/'){
			printf("The Divison is equal to : %0.3f\n",(float)number1/number2);
		}
		else if(operator == '%'){
			printf("The Remainder is equal to : %d\n",number1%number2);
		}
		else{
			printf("Invalid operator to continue again  press y \nor to exit press n \n");
			fflush(stdin);
			scanf(" %c",&start);
			if(start != 'y'){
				printf("Thank you for using the calculator\n");
				break;
			}

		}
	
		if(start == 'y'){
			printf("Do you want us the calculator again then press y else press n \n");
			scanf(" %c",&start);
		}
	}
	return 0;

} 
