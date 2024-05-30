/*
AUTHOR: Akashdeep Gupta
Multiple argument in C and arraylist
DOC: 30 may 2024
*/

#include <stdio.h>
#include <stdarg.h>

int sum(int n,...);

int main()
{
    printf("Sum of 10, 20, 30 is %d\n", sum(3, 10, 20, 30));
    printf("Sum of 4, 5, 6, 7, 8 is %d\n", sum(5, 4, 5, 6, 7, 8));
    return 0;
}

int sum(int n, ...){
    int sum = 0;
    va_list list;
    va_start(list,n);
    for (int i = 0; i < n; i++) {
        sum += va_arg(list,int);
    }
    va_end(list);
    return sum;
}
