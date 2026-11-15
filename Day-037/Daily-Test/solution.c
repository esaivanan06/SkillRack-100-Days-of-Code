#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s), a = 0, b = 0;
    while (a < l && (s[a] == 'a' || s[a] == 'e' || s[a] == 'i' ||
                     s[a] == 'o' || s[a] == 'u'))
        a++;
    for (int i = 0; i < l; i++)
        if (s[i] == 'a' || s[i] == 'e' ||
            s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            b = i;
    char t = s[a];
    s[a] = s[b];
    s[b] = t;
    printf("%s", s);
    return 0;
}