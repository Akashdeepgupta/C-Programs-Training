/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[100];
    char toDelete[100];
    int ptr =0,ptr2 = 0;
    char **words,**sol;
    words = (char **)malloc(100*sizeof(char *));
    sol = (char **)malloc(100*sizeof(char *));
    
    printf("Enter the sentence:\n");
    fgets(str,100,stdin);
    printf("Enter the word you have to delete from the sentence\n");
    scanf("%s",toDelete);
    printf("the string to delete is : %s\n",toDelete);
    printf("the entered sentence is: \n%s\n",str);
    char *t = strtok(str," ");
    printf("t is: %s\n",t);
    while(t!=NULL){
        words[ptr] = (char *)malloc(100*sizeof(char));
        strcpy(words[ptr],t);
        t = strtok(NULL," ");
        ptr++;
    }
    printf("The words are :\n");
    for (int i = 0; i < ptr; i++) {
        printf("%s\t",words[i]);
    }
    printf("\n");
    
    for(int i=ptr-1;i>=0;i--){
        if(!strcmp(toDelete,words[i])){
            strcpy(words[i]," ");
            break;
        }
    }
    
    for (int i = 0; i < ptr; i++) {
       if(strcmp(words[i]," ")){
           sol[ptr2] = (char *)malloc(100*sizeof(char));
           strcpy(sol[ptr2],words[i]);
           ptr2++;
       }
    }
    
    printf("The words are :\n");
    for (int i = 0; i < ptr-1; i++) {
        printf("%s\t",sol[i]);
    }
    
    return 0;
}


