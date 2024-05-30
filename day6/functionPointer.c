/*
AUTHOR: Akashdeep Gupta
Function Pointer
DOC: 29 may 2024
*/
#include <stdio.h>

int sum(int,int);
int mult(int,int);

int main()
{
    int (*sum_ptr)(int,int);
    sum_ptr = sum;
    
    int (*mult_ptr)(int,int);
    mult_ptr = mult;
    
    printf("Sum is: %d\n",sum_ptr(10,10));
    printf("Multiplication is: %d\n",mult_ptr(10,10));
    
    return 0;
}

int sum(int a,int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}


