#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    for (char i = ch; i <= 'z'; i++)
    {
        printf("%c", i);

        if (i > ch && (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'))
            break;
    }

    return 0;
}