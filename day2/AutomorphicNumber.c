/*
AUTHOR : Akashdeep Gupta
Automorphic number
DOC : 24th  may 2024
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int square;
    printf("Enter the number\n");
    scanf("%d",&n);
    square = n*n;
    int temp1 = n;
    while(n > 0){
        int rem1 = n%10;
        int rem2 = square%10;
        if(rem1!=rem2){
            printf("The Numbers %d is not automorphic",n);
        }
        n=n/10;
        square = square/10;
    }
        n = temp1;
    printf("The Numbers %d is automorphic\n",n);
    printf("Because %d and square of %d which is : %d have same last digits",n,n,n*n);

    return EXIT_SUCCESS;
}

