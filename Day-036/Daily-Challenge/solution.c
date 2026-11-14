#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char n[9];
    scanf("%s", n);
    int l = strlen(n);
    for (int i = 0; i < l; i++)
        printf("%.2f ", sqrt(n[i] - '0'));
    return 0;
}