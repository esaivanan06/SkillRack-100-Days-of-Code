#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[101], c1, c2;
    scanf("%s\n%c %c", s, &c1, &c2);
    int l = strlen(s);
    for(int i=0; i<l; i++){
        if(s[i]==c1) s[i] = c2;
        printf("%c", s[i]);
    }
    return 0;
}