#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    char c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
            printf("*");
        c = 'A';
        for (int j = 1; j <= i; j++)
            printf("%c", c++);
        c--;
        for (int j = 1; j < i; j++)
            printf("%c", --c);
        printf("\n");
    }
    return 0;
}