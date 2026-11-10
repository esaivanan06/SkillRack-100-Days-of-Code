#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    y += x;
    int d = 0, t = y;
    for (; t; t /= 10)
        d++;
    if (d == x)
        x = y;
    printf("%d", x);
    return 0;
}