#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, n, s = 0;
    scanf("%d%d", &n, &x);
    for(; n; n/=10) s += n%10;
    printf("%d", s*x);
    return 0;
}