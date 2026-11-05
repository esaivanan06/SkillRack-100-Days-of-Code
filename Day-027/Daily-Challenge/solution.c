#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t;
    scanf("%d", &n);
    int o = n;
    while (n--)
    {
        scanf("%d", &t);
        if (!t)
        {
            printf("0 ");
            o--;
        }
    }
    while (o--)
        printf("1 ");
    return 0;
}