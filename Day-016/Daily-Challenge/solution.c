#include<stdio.h>
#include<stdlib.h>

int main(){
    char s[4];
    scanf("%3s", s);
    printf("%d", (s[2] - '0')*100 + (s[1] - '0')*10 + (s[0] - '0'));
    return 0;
}