/*
AUTHOR: Akashdeep Gupta
Function Pointer
DOC: 29 may 2024
*/
#include <stdio.h>

int sum(int,int);
int mult(int,int);
int sub(int,int);

int main()
{
    int choice;
    int (*func_ptr_arr[])(int,int) = {sum,mult,sub};
    printf("Enter Choice: 0 for add, 1 for multiply and 2 for subtract\n");
    scanf("%d",&choice);
    printf("%d\n",func_ptr_arr[choice](10,12));
    
    return 0;
}

int sub(int a, int b){
    return a-b;
}

int sum(int a,int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}
