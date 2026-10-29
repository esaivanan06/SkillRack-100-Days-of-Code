#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[17];
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0; i<l; i++, printf("\n")) for(int j=0; j<=i; j++) printf("%c", s[i]); 
    return 0;
}