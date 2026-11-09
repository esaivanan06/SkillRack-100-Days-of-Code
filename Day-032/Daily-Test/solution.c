#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
        printf("- ");
    for (int i = 0; i < n; i++)
        printf("* ");
    printf("\n");
    for (int i = 2, k = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
            printf("- ");
        printf("* ");
        for (int j = 2; j < n; j++)
            printf("%d ", k++);
        printf("*\n");
    }
    for (int i = 0; i < n; i++)
        printf("* ");
    return 0;
}
