/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isConsonant(char );

int main()
{
    char temp[1000];
    printf("Enter the String\n");
    fgets(temp,1000,stdin);
    int n = strlen(temp);
    if(temp[n-1] == '\n'){
        temp[n-1] = '\0';
    }
    
    int ps[n];
    int sf[n];
    memset(ps,0,n*sizeof(int));
    memset(sf,0,n*sizeof(int));
    if(isConsonant(temp[0])){
        ps[0] = 1;
    }
    for(int i =1;i<n-1;i++){
        if(isConsonant(temp[i])){
            ps[i] = ps[i-1]+1;
        }
        else{
            ps[i] = ps[i-1];
        }
    }
    
    if(isConsonant(temp[n-2])){
        sf[n-2] = 1;
    }
    
    for(int i = n-3;i>=0;i--){
        if(isConsonant(temp[i])){
            sf[i] = sf[i+1]+1;
        }else{
            sf[i] = sf[i+1];
        }
    }
    
    printf("Prefix array:\n");
    for(int i =0;i<n;i++){
        printf("%d ",ps[i]);
    }
    
    printf("\nsuffix array:\n");
    for(int i =0;i<n-1;i++){
        printf("%d ",sf[i]);
    }
    
    int ans = 0;
    for(int i =0;i<n-2;i++){
        if(ps[i]>sf[i+1]){
            ans++;
        }
    }
    printf("\ntotal ways are: %d\n",ans);
    
    return 0;
}

int isConsonant(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return 0;
    }
    return 1;
}

