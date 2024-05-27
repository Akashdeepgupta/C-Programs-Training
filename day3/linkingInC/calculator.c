

/*
AUTHOR: Akashdeep Gupta
Linking Demonstration 
DOC: 27 May 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include "calculator_header.h"
int main(){
	int val1;
	int val2;
	char op;
	printf("Enter the number 1\n");
	scanf("%d",&val1);
	printf("Enter the number 2\n");
	scanf("%d",&val2);
	printf("Enter the operator\n");
	scanf(" %c",&op);
	switch(op){
		case '+' :  printf("the addition is : %d\n",sum(val1,val2));
			break;
		case '-' : printf("the subtraction is : %d\n",sub(val1,val2));
		       break;
		case '*' : printf("The multiplication is : %d\n",mult(val1,val2));
			break;
		case '/' :printf("The divison is is : %d\n",divide(val1,val2));
			break;
		default: printf("Not a Valid Operator");
	}

	return EXIT_SUCCESS;
}


