/******************************************************************************

AUTHOR: Akashdeep Gupta
delete the adjacent duplicate characters from string
DOC: 30 may 2024

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// delete the adjacent duplicate characters from string
//aaaabbbcdedee -> cded
//abccd -> abd

int main()
{
    char temp[1000],sol[1000];
    int ptr=0,n;
    printf("Enter the String:\n");
    fgets(temp,1000,stdin);
    n = strlen(temp);
    for (int i = 0; i < n ; i++) {
        char ch = temp[i];
        for (int j = i+1; j < n ; j++) {
            if(temp[j] == ch){
                temp[j] = ' ';
                temp[i] = ' ';
            }else{
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        char ch = temp[i];
        if( (ch>='a' && ch <='z') || (ch >= 'A' && ch <='Z') ){
            sol[ptr++] = ch;
        }
    }
    sol[ptr] ='\0';
    printf("The String is: %s\n",sol);
    return 0;
}

