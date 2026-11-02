#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0, j = 0, c = 1; i < l; i += c, c++, j += c)
    {
        for (int k = j; k >= i; k--)
            printf("%c ", k < l ? s[k] : '*');
        printf("\n");
    }
    return 0;
}