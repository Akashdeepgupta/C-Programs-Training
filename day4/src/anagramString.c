/*
AUTHOR: Akashdeep Gupta
Anagram String
DOC: 27th May 2024
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str1[4096];
    char str2[4096];
    printf("Enter the String 1\n");
    scanf("%[^\n]s",str1);
    printf("Enter the String 2\n");
    scanf(" %[^\n]s",str2);
    printf("The string 1 is : %s\n",str1);
    printf("The string 2 is : %s\n",str2);

    if(strlen(str1) != strlen(str2)){
        printf("The string are not anagrams\n");
        return EXIT_FAILURE;
    }
    int hashForStr1[123];
    int hashForStr2[123];
    int n = strlen(str1);

    for(int i =0;i<n;i++){
        int idx = str1[i]-0;
        hashForStr1[idx]++;
    }

    for(int i =0;i<n;i++){
        int idx = str2[i]-0;
        hashForStr2[idx]++;
    }

    for(int i = 0;i<n;i++){
        if(hashForStr1[i] != hashForStr2[i]){
            printf("The string are not anagrams\n");
            return EXIT_FAILURE;
        }
    }

    printf("The string %s and %s are Anagrams\n",str1,str2);



    return EXIT_SUCCESS;
}

