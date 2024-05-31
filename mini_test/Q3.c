#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char words[1000][1000];
    printf("Enter the String\n");
    fgets(str,1000,stdin);
    int n = strlen(str);
    int ptr = 0;
    char *t = strtok(str,"|");
    while(t!=NULL){
        strcpy(words[ptr++], t);
        t = strtok(NULL,"|");
    }
    n = ptr;
    
    for(int i = 0;i<n;i++){
        printf("%s\n",words[i]);
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0;j<n-i-1;j++) {
            int res = strcmp(words[j],words[j+1]);
            if(res > 0){
               // printf(" j is :%d\n",j);
                char temp[1000]="";
                strcpy(temp,words[j]);
               // printf("temp: %s\t",temp);
                strcpy(words[j],words[j+1]);
               // printf("words j: %s\t",words[j]);
                strcpy(words[j+1],temp);
               // printf("words j+1 :%s\t",words[j+1]);
               // printf("words j: %s\t",words[j]);
               // printf("temp: %s\t",temp);
               // printf("\n");
            }
        }
    }
    
    
    
    
    printf("The sorted words are :\n");
    for(int i = 0;i<n;i++){
        printf("%s\t",words[i]);
    }
    printf("\n\n");
    
    return 0;
}


