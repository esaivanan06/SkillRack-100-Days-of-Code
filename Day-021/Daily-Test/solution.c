#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main(){
    char s[10];
    scanf("%s", s);
    bool r = (s[0] - '0') % 2;
    int i=0, l = strlen(s);
    while(i<l && (s[i] - '0')%2==r) printf("%c", s[i++]);
    return 0;
}