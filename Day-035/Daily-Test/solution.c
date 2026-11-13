#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, t1, t2, t3;
    bool flag = false;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &t1);
        t3 = t1;
        t2 = t1 % 10;
        while (t1 > 9)
            t1 /= 10;
        if (t1 == t2)
        {
            printf("%d ", t3);
            flag = true;
        }
    }
    if (!flag)
        printf("-1");
    return 0;
}