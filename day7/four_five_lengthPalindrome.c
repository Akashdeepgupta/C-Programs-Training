/******************************************************************************
AUTHOR: Akashdeep Gupta
4 len palindrom -> +5
5 len palindrom -> +10
DOC: 05 june 2024

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

int main()
{
    char *str = (char *)malloc(size*sizeof(char));
    int score = 0;
    printf("Enter the String\n");
    fgets(str,size,stdin);
    int n = strlen(str);
    if(str[n-1] == '\n'){
        str[n-1] ='\0';
    }
    
    for (int i = 0; i < n; i++) {
        if(i+3 < n){
            if((str[i] == str[i+3]) && (str[i+1] == str[i+2])){
                score += 5;
            }
        }
        if(i+4 < n){
            if( (str[i] == str[i+4]) && (str[i+1] == str[i+3]) ){
                score += 10;
            }
        }
        
    }
    printf("The score is : %d\n",score);
    return 0;
}


