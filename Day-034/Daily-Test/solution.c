#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[10];
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0, x; i<l; i++){
        x = s[i] - '0';
        while(x--) printf("%c", s[i]);
    }
    return 0;
}