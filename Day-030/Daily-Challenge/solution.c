#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[17], b[5], c;
    b[4] = '\0';
    scanf("%s", s);
    int l = strlen(s);
    for(int i=0, t, len; i<l; i++){
        t = s[i] - '0';
        len = 0;
        while(t){
            b[len++] = t%2 + '0';
            t/=2;
        }
        while(len<4) b[len++] = '0';
        c = b[0];
        b[0] = b[3];
        b[3] = c;
        c = b[1];
        b[1] = b[2];
        b[2] = c;
        printf("%s\n", b);
    }
    return 0;
}
