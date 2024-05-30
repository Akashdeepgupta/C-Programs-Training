/*
AUTHOR: Akashdeep Gupta
Struct studentscore
DOC: 30 may 2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareBySales(const void *,const  void *);

typedef struct studentscore{
    char studentId[20];
    double score;
} studentscore;

int main() {
    int n;
    int hashArr[10000]={0};
    int hashArrCount[10000]={0};
    printf("Enter the number of Entries you want to add\n");
    scanf("%d",&n);
    studentscore students[n];
    printf("Enter all the Entires: \n");
    for(int i=0;i<n;i++){
        char temp[20];
        scanf("%s",temp);
        char *t = strtok(temp,"-");
        strcpy(students[i].studentId,t);
        t = strtok(NULL,"-");
        students[i].score = atoi(t);
    }

    printf("The Entries are: \n");
    for(int i=0;i<n;i++){
        printf("%s - %f\n",students[i].studentId,students[i].score);
    }

    for (int i = 0; i < n; i++) {
        int digit;
        sscanf(students[i].studentId, "S%d", &digit);
        hashArr[digit] = hashArr[digit]+students[i].score;
        hashArrCount[digit]++;
    }

    int count = 0;
    studentscore sol[n];

    for (int i = 0; i < 10000; i++) {
        if(hashArr[i]!=0){
            char str[10];
            sprintf(str,"P%d",i);
            strcpy(sol[count].studentId,str);
            sol[count].score = (double)hashArr[i]/hashArrCount[i];
            count++;
        }
    }

    printf("The solutions are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %f\n",sol[i].studentId,sol[i].score);
    }

    qsort(sol, count, sizeof(studentscore), compareBySales);

    printf("The solutions after sorting are: \n");
    for(int i=0;i<count;i++){
        printf("%s - %lf\n",sol[i].studentId,sol[i].score);
    }




    return EXIT_SUCCESS;
}


int compareBySales(const void *a, const void *b) {
    const studentscore *studentA = (const studentscore *)a;
    const studentscore *studentB = (const studentscore *)b;

    if (studentA->score > studentB->score) {
        return -1;
    } else if (studentA->score < studentB->score) {
        return 1;
    } else {
        return 0;
    }
}
