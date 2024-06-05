/******************************************************************************


*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char char1,char2;
    printf("Enter the String\n");
    fgets(str,50,stdin);
    int n = strlen(str);
    printf("Enter the character to be replaced\n");
    scanf(" %c",&char1);
    printf("Enter the character to be replace with\n");
    scanf(" %c",&char2);
    for(int i =0;i<n;i++){
        if(str[i]==char2){
            str[i] = char1;
            break;
        }
    }
    printf("The modified String is: \n%s",str);
    return 0;
}


