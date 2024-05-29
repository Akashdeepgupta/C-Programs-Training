/*
AUTHOR: Akashdeep Gupta
Top Product Sales 
DOC: 28 May 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int,int);
int compareBySales(const void *,const  void *);

typedef struct productSales{
    char productId[20];
    int totalSales;
} productSales;

int main() {
    int n;
    int hashArr[10000]={0};
    printf("Enter the number of Entries you want to add\n");
    scanf("%d",&n);
    productSales productsales[n];
    printf("Enter all the Entires: \n");
    for(int i=0;i<n;i++){
        char temp[20];
        scanf("%s",temp);
        char *t = strtok(temp,"-");
        strcpy(productsales[i].productId,t);
        t = strtok(NULL,"-");
        productsales[i].totalSales = atoi(t);
    }
    
    printf("The Entries are: \n");
    for(int i=0;i<n;i++){
        printf("%s - %d\n",productsales[i].productId,productsales[i].totalSales);
    }
    
    for (int i = 0; i < n; i++) {
        int digit;
        sscanf(productsales[i].productId, "P%d", &digit);
        hashArr[digit] = max(hashArr[digit],productsales[i].totalSales);
    }
    
    int count = 0;
    productSales sol[n];
    
    for (int i = 0; i < 10000; i++) {
        if(hashArr[i]!=0){
            char str[10];
            sprintf(str,"P%d",i);
            strcpy(sol[count].productId,str);
            sol[count].totalSales = hashArr[i];
            count++;
        }
    }
    
    printf("The solutions are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %d\n",sol[i].productId,sol[i].totalSales);
    }
    
    qsort(sol, count, sizeof(productSales), compareBySales);
    
    printf("The solutions after sorting are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %d\n",sol[i].productId,sol[i].totalSales);
    }
    
    
    
    
    return EXIT_SUCCESS;
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int compareBySales(const void *a, const void *b) {
    const productSales *productA = (const productSales *)a;
    const productSales *productB = (const productSales *)b;

    if (productA->totalSales > productB->totalSales) {
        return -1;
    } else if (productA->totalSales < productB->totalSales) {
        return 1;
    } else {
        return 0;
    }
}

