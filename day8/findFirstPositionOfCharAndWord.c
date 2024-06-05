/******************************************************************************

AUTHOR: Akashdeep gupta

ip1: sentence
ip2: char
ip3: substring(single word)
search the character in the string and find the first occurence - find position p1
search the substring in the string and find the first occurence - find position p2
retunr p1+p2

DOC: 05 JUne 2024

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str = (char *)malloc(200*sizeof(char));
    int idxOfChar=-1,idxOfWord=-1;
    printf("Enter the string\n");
    fgets(str,200,stdin);
    int n = strlen(str);
    if(str[n-1] == '\n'){
        str[n-1] = '\0';
    }
    char charToFind;
    char *wordToFind = (char *)malloc(200*sizeof(char));
    printf("Enter the char to search\n");
    scanf("%c",&charToFind);
    printf("Enter the word to Find\n");
    scanf("%s",wordToFind);
    int len=strlen(wordToFind);
    printf("The char is: %c the word is: %s\n",charToFind,wordToFind);
    
    for (int i = 0; i < n; i++) {
        if(str[i] == charToFind){
            idxOfChar = i;
            break;
        }
    }
    
    if(str[0] != ' '){
        char *temp = (char*)malloc(200*sizeof(char));
        int x = 0;
        while( (str[x]!=' ') && (str[x]!='\0')){
            temp[x] = str[x];
            x++;
        }
        //printf("here is the%s\n",temp);
        if(!strcmp(temp,wordToFind)){
            idxOfWord = 0;
            printf("The answer is:%d\n",idxOfWord+idxOfChar);
            return 0;
        }
    }
    
    for(int i =1;i<n;i++){
        if( (str[i-1] == ' ') && (str[i] == wordToFind[0]) ){
            //check if it is the wordToFind
            int temp = 1;
            int j = i+1;
            int flag = 1;
            
            while(j<n && temp < len){
                if(str[j] == wordToFind[temp]){
                    j++;
                    temp++;
                }
                else{
                    flag = 0;
                }
            }
            
            
            if(flag == 1){
                idxOfWord = i;
                break;
            }
        }
    }
    
    printf("The char pos is: %d\n",idxOfChar);
    printf("The word pos is : %d\n",idxOfWord);
    
    printf("The answer is:%d\n",idxOfWord+idxOfChar);
    
    return 0;
}

