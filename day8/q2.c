/******************************************************************************

ip1: int n
take n lines of input
in each line pair of time HH/MM/SS
compare each pair in every line, if first time is less print earlier, if first time is greater then print after, else equal


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myflush();
char* compare(char*, char*);

int main()
{
   char **str = (char **)malloc(100*sizeof(char *));
   int n;
   printf("Enter the number of lines \n");
   scanf("%d",&n);
   
   for (int i = 0; i < n; i++) {
       char *temp = (char*)malloc(30*sizeof(char));
       scanf("%s",temp);
       str[i] = (char*)malloc(30*sizeof(char));
       strcpy(str[i],temp);
       strcat(str[i]," ");
       scanf("%s",temp);
       strcat(str[i],temp);
   }
   
  for(int i =0;i<n;i++){
      char temp1[30],temp2[30];
      char temp[100];
      strcpy(temp,str[i]);
      char *t = strtok(temp," ");
      strcpy(temp1,t);
      t = strtok(NULL," ");
      strcpy(temp2,t);
      
      printf("%s\n",compare(temp1,temp2));
  }
   printf("the timings are:\n");
   for (int i = 0; i < n; i++) {
       printf("%s\n",str[i]);
   }
   
    return 0;
}

char* compare(char *temp1, char *temp2){
    char *t1 = strtok(temp1,"/");
    char *t2 = strtok(temp2,"/");
    while(t1!=NULL && t2!=NULL){
        int val1 = atoi(t1);
        int val2 = atoi(t2);
        if(val1 < val2){
            return "LESSER";
        }
        else if(val1 > val2){
            return "Greater";
        }
        t1 = strtok(NULL,"/");
        t2 = strtok(NULL,"/");
    }
    return "EQUAL";
}

void myflush(){
    while('\n' != getchar());
}

