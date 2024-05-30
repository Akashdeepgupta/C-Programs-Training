/*
AUTHOR: Akashdeep Gupta
Struct SUM productSales
DOC: 30 may 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareBySales(const void *,const  void *);

typedef struct productSales{
    char productID[20];
    double quantity;
} productSales;

int main() {
    int n;
    int hashArr[10000]={0};
    printf("Enter the number of Entries you want to add\n");
    scanf("%d",&n);
    productSales products[n];
    printf("Enter all the Entires: \n");
    for(int i=0;i<n;i++){
        char temp[20];
        scanf("%s",temp);
        char *t = strtok(temp,"-");
        strcpy(products[i].productID,t);
        t = strtok(NULL,"-");
        products[i].quantity = atoi(t);
    }

    printf("The Entries are: \n");
    for(int i=0;i<n;i++){
        printf("%s - %f\n",products[i].productID,products[i].quantity);
    }

    for (int i = 0; i < n; i++) {
        int digit;
        sscanf(products[i].productID, "P%d", &digit);
        hashArr[digit] = hashArr[digit]+products[i].quantity;
    }

    int count = 0;
    productSales sol[n];

    for (int i = 0; i < 10000; i++) {
        if(hashArr[i]!=0){
            char str[10];
            sprintf(str,"P%d",i);
            strcpy(sol[count].productID,str);
            sol[count].quantity = hashArr[i];
            count++;
        }
    }

    printf("The solutions are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %f\n",sol[i].productID,sol[i].quantity);
    }

    qsort(sol, count, sizeof(productSales), compareBySales);

    printf("The solutions after sorting are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %lf\n",sol[i].productID,sol[i].quantity);
    }




    return EXIT_SUCCESS;
}


int compareBySales(const void *a, const void *b) {
    const productSales *studentA = (const productSales *)a;
    const productSales *studentB = (const productSales *)b;

    if (studentA->quantity > studentB->quantity) {
        return -1;
    } else if (studentA->quantity < studentB->quantity) {
        return 1;
    } else {
        return 0;
    }
}
