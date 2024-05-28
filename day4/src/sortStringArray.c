/*
AUTHOR: Akashdeep Gupta
Sort the String array lexicographically
DOC: 28th May 2024
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int n;
    printf("Enter the number of words you will have: \n");
    scanf("%d",&n);
    char words[n][20];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d word: ", i + 1);
        scanf("%s", words[i]);
    }

    printf("Before Sorting: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\t",words[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0;j<n-i-1;j++) {
            int res = strcmp(words[j],words[j+1]);
            if(res > 0){
                //swap
                char temp[20];
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }

    printf("After Sorting: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\t",words[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}




