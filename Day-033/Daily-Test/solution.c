#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[101], c;
    int k;
    scanf("%s%d", s, &k);
    int l = strlen(s);
    for (int i = l - 1; i >= 0 && k; i--)
    {
        c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            s[i] = '0';
            k--;
        }
    }
    for (int i = 0; i < l; i++)
        if (s[i] != '0')
            printf("%c", s[i]);
    return 0;
}