#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);
    int l = strlen(s), m = l / 2;
    for (int i = 0, j = m; i < m; i++, j--)
    {
        printf("%c", s[i]);
        for (int k = 1; k < j; k++)
            printf("*");
        printf("%c\n", s[l - i - 1]);
    }
    printf("%c\n", s[m]);
    for (int i = m - 1, j = 0; i >= 0; i--, j++)
    {
        printf("%c", s[i]);
        for (int k = 0; k < j; k++)
            printf("*");
        printf("%c\n", s[l - i - 1]);
    }
    return 0;
}