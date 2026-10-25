#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[101];
    int n;
    scanf("%s%d", s, &n);
    int l = strlen(s), i = 0;
    char c = 'a' + n - 1;
    while(i<l && s[i]!=c) i++;
    if(i==l) printf("no");
    else printf("yes");
    return 0;
}