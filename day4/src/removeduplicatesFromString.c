/*
AUTHOR: Akashdeep Gupta
Remove Duplicate Character from String
DOC: 27th May 2024
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str1[] ="aaakash";
    int n = strlen(str1);
    printf("%d\n",n);
    char str2[n];
    printf("%s\n",str1);
    printf("%s\n",str2);
    int hash[26];
    memset(hash,0,sizeof(int)*26);
    for(int i = 0;i<n;i++){
        int idx = str1[i]-'a';
        hash[idx]++;
    }
    int ptr = 0;

    for(int i = 0;i<n;i++){
        int idx = str1[i]-'a';
        if(hash[idx] >=1){
            str2[ptr++] = str1[i];
            hash[idx] = 0;
        }
    }

    printf("%s\t",str2);
    return EXIT_SUCCESS;
}

