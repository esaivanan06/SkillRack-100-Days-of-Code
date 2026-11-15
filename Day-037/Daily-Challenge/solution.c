#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0, k = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (k % x)
                printf("%d ", k);
            else
                printf("* ");
            k++;
        }
        printf("\n");
    }
    return 0;
}