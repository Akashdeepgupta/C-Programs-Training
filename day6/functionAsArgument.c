/*
AUTHOR: Akashdeep Gupta
Function as a Argument
DOC: 29 may 2024
*/
#include <stdio.h>


typedef int (*sum_multiply_function_ptr)(int,int);

sum_multiply_function_ptr sum(int,int);
int mult(int,int);
int sub(int,int);


int main()
{
    sum_multiply_function_ptr (*sum_ptr)(int,int) ;
    sum_ptr = sum;
    printf("%d\n",sum_ptr(10,20)(12,10));
    
    
    return 0;
}

int sub(int a, int b){
    return a-b;
}

sum_multiply_function_ptr sum(int a,int b){
    int sum = a+b; //30
    printf("sum is: %d\n",sum);
    return mult;
    
}

int mult(int a, int b){
    return a*b;
}




