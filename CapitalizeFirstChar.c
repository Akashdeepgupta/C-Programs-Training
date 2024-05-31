#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("Enter the String\n");
    fgets(str,1000,stdin);
    int n = strlen(str);
    for(int i = 0;i<n;i++){
        if(i == 0){
            if(str[i]!=' '){
                if(str[i]>=97 && str[i]<=122){
                str[i] = str[i]-32;
            }
            }
        }
        else if(str[i-1] == ' ' && str[i]!= ' ' ){
            if(str[i]>=97 && str[i]<=122){
                str[i] = str[i]-32;
            }
        }
    }
    printf("%s",str);

    return 0;
}

