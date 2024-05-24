
/*
Author: Akashdeep gupta
Simple Area and circumference of the circle
DOC : 23rd may 2024
*/

#include<stdio.h>
#define PI 22/7
int main(){
	int radius;
	printf("Enter the radius of the circle\n");
	scanf("%d",&radius);
	printf("the area of the circle is: %f\n",(float)PI*radius*radius);
	printf("the circumference of the circle is : %f\n",(float)2*PI*radius);
	return 0;

}
