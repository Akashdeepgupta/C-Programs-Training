
/*
AUTHOR: Akashdeep Gupta
Armstrong Number
DOC: 24th May 2024
*/


#include <stdio.h>
#include <math.h>

int countDigits(int);

int main() {
    int n, powerSum=0;
    printf("Enter the Number\n");
    scanf("%d",&n);
    int temp  = n;
    int noOfDigits = countDigits(n);
    printf("the no of digits is %d\n",noOfDigits);
    while(temp > 0){
        int rem = temp%10;
	int power = pow(rem,noOfDigits);
        powerSum += power;
        temp = temp/10;
    }
    printf("n is : %d\n",n);
    printf("powerSum is : %d\n",powerSum);
    if(n == powerSum){
        printf("The number is armstrong\n");
    }
    else{
        printf("the number is not armstrong\n");
    }
    return 0;
}

int countDigits(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n/10;
    }
    return count;
}
