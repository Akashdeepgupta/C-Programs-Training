/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isAnagram(char [], char []);

int main()
{
    char *str = (char *)malloc(300*sizeof(char));
    printf("Enter the String\n");
    fgets(str,300,stdin);
    int n = strlen(str);
    str[n-1] = '\0';
    char **words = (char **)malloc(100*sizeof(char *));
    char *tok = strtok(str," ");
    int ptr = 0;
    while(tok!=NULL){
        words[ptr] = (char *)malloc(100*sizeof(char));
        strcpy(words[ptr],tok);
        tok = strtok(NULL," ");
        ptr++;
    }
    
    printf("the words are: \n");
    for (int i = 0; i < ptr; i++) {
        printf("%s ",words[i]);
    }
    
    for(int i = 0;i<ptr;i++){
        int flag = 1;
        for(int j  = i+1;j<ptr;j++){
            if(!strcmp(words[i],words[j])){
                flag = 0;
                strcpy(words[j]," ");
            }
            else if(isAnagram(words[i],words[j])){
                flag = 0;
                strcpy(words[j]," ");
            }
        }
        if(flag == 0){
            words[i] = "";
        }
    }
    
    printf("\nafter ops the words are: \n");
    for (int i = 0; i < ptr; i++) {
        printf("%s ",words[i]);
    }
    
    return 0;
}

int isAnagram(char a[], char b[]){
    int hash1[26]={0};
    int hash2[26]={0};
    int n = strlen(a);
    int m = strlen(b);
    if(n!=m){
        return 0;
    }
    for(int i = 0;i<n;i++){
        int val = a[i]-'a';
        hash1[val]++;
    }
    
    for(int i = 0;i<m;i++){
        int val = b[i]-'a';
        hash2[val]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if(hash1[i]!=hash2[i]){
            return 0;
        }
    }
    return 1;
}

