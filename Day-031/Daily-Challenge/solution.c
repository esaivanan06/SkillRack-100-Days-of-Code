#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s%s", s1, s2);
    int l1 = strlen(s1), l2 = strlen(s2);
    if (s1[0] == s2[0] && s1[l1 - 1] == s2[l2 - 1])
        printf("YES");
    else
        printf("NO");
    return 0;
}