/*
AUTHOR: Akashdeep Gupta
Copy File
DOC: 29 may 2024
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int copyFile(FILE *,FILE*);
int displyFile(FILE *);

int main()
{
    FILE *input = NULL,*output = NULL;
    int ret_value=1;
    input = fopen("file.txt","r");
    if(input == NULL){
        printf("The Files does not exists\n");
        return EXIT_FAILURE;
    }
    
    printf("The file to be copied is: \n");
    displyFile(input);
    rewind(input);
    
   
    
    output = fopen("sample.txt","w");
    if(output == NULL){
        printf("Cannot create the file\n");
        return EXIT_FAILURE;
    }
    
    ret_value = copyFile(input,output);
    if(ret_value == 0){
        printf("Cannot copy the File\n");
    }
    ret_value = fclose(input);
    if(ret_value!=0){
        printf("The Input file cannot be closed\n");
    }
    ret_value = fclose(output);
    if(ret_value!=0){
        printf("The Input file cannot be closed\n");
    }
    
    output = fopen("sample.txt","r");
    if(output == NULL){
        printf("cannot open sample.txt file\n");
        return EXIT_FAILURE;
    }
    
    printf("The copied file is: \n");
    ret_value = displyFile(output);
    if(ret_value == 0){
        printf("Cannot disply the copied file\n");
    }
    ret_value = fclose(output);
     if(ret_value!=0){
        printf("The output file cannot be closed\n");
    }
    
   
    
    return 0;
}

int copyFile(FILE *fp1, FILE *fp2){
    printf("I am copying the file..");
    char temp;
    while(1){
        temp = (char)fgetc(fp1);
        if(feof(fp1)){
            break;
        }
        fputc(temp,fp2);
    }
    printf("\n");
    return 1;
}

int displyFile(FILE * fp){
    char temp;
    while(1){
        temp = (char)fgetc(fp);
        if(feof(fp)){
            break;
        }
        printf("%c",temp);
    }
    printf("\n");
    return 1;
}

