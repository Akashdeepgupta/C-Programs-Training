
/*
Author: Akashdeep gupta
Binary to Decimal
DOC : 23rd may 2024
*/

#include<stdio.h>

int main(){
	int binary;
	int answer = 0;
	int power = 1;
	printf("enter the binary number\n");
	scanf("%d",&binary);
	while(binary > 0){
		int rem = binary%10;
		answer += rem*power;
		power=power*2;
		binary /= 10;
	}
	printf("the decimal value is :%d\n",answer);
	return 0;

}
