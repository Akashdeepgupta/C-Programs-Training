/*
AUTHOR: Akashdeep Gupta
reverse words of the String
DOC: 27th May 2024
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* strrev(char str[]);

int main(){
    char str[4096];
    printf("Enter the string\n");
    scanf("%[^\n]s",str);

    char * sol = strtok(str," ");
    while(sol != 0){
        printf("%s ",strrev(sol));
        sol = strtok(NULL," ");
    }


    return EXIT_SUCCESS;
}

char* strrev(char str[]){
    int n = strlen(str);
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}


