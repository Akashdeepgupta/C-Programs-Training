/*
AUTHOR: Akashdeep Gupta
Palindrome String
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


    char original[4096];
    strcpy(original, str);

    char *str2 = strrev(str);

    printf("first str :%s\n",original);
    printf("Second str : %s\n",str2);
    int res = strcmp(original, str2);
    if(res == 0){
        printf("The String is palindrome");
    }
    else{
        printf("The String is not Palindrome");
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
