
/*
AUTHOR: Akashdeep Gupta
Remove Duplicate Character from String
DOC: 28th May 2024
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
    char *revWords[4096];
    int ptr = 0;
    while(sol != 0){
        //printf("%s ",strrev(sol));
        revWords[ptr++] = strrev(sol);
        sol = strtok(NULL," ");
    }
    
    for (int i = 0; i < ptr; i++) {
        printf("%s\n", revWords[i]);
    }
    
    for (int i = ptr-1; i >=0; i--) {
        printf("%s ", strrev(revWords[i]));
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

