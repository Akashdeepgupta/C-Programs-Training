/*
AUTHOR: Akashdeep Gupta
Copy File
DOC: 31 may 2024
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    
    FILE *fp = NULL;
    int ptr=0,n,ret_puts,ret_close;
    char *ret_gets;
    char op[1000];
    
    char str [10][10] ={
        "Akash\n","Airoli\n","Trekking\n","Nature\n"
    };
    n = 4;
    
    fp = fopen("copied_from_Array.txt","w");
    if(fp == NULL){
        printf("Cannot open/create the new file\n");
        return EXIT_FAILURE;
    }
    
    for(int i = 0;i<n;i++){
        ret_puts = fputs(str[i],fp);
        if(ret_puts == EOF){
            printf("Error adding to the file\n");
            ret_close = fclose(fp);
            if(ret_close != 0){
                printf("Error while closing the file\n");
                return EXIT_FAILURE;
            }
            return EXIT_FAILURE;
        }
    }
    
    ret_close = fclose(fp);
    if(ret_close != 0){
        printf("Error while closing the file\n");
        return EXIT_FAILURE;
    }
    
    fp = fopen("copied_from_Array.txt","r");
    if(fp == NULL){
        printf("Cannot open/create the new file\n");
        return EXIT_FAILURE;
    }
    
    while(1){
        ret_gets = fgets(op,1000,fp);
        if(feof(fp)){
            printf("Reading the file completed\n");
            break;
        }
        if(ret_gets != NULL){
            printf("%s\t",op);
            printf("%ld is the size\n",strlen(op));
        }
        else{
            printf("Cannot read the file\n");
            ret_close = fclose(fp);
            if(ret_close != 0){
                printf("Error while closing the file\n");
                return EXIT_FAILURE;
            }
            return EXIT_FAILURE;
        }
    }
    
    
    ret_close = fclose(fp);
    if(ret_close != 0){
        printf("Error while closing the file\n");
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}






