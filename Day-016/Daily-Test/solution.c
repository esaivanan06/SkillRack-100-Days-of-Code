#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[101];
    fgets(s, 100, stdin);
    int l = strlen(s);
    while(l>=0 && !isalpha(s[l-1])) l--;
    for(int i=0, j=l-1; i<=j; i++, j--){
        printf("%c", s[i]);
        if(i!=j) printf("%c", s[j]);
        if(s[i] == s[j]) break;
    }
    return 0;
}