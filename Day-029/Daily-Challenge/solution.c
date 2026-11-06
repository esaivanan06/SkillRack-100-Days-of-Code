#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, t, l;
    scanf("%d", &n);
    char s[32], c;
    for(int i=1; i<=n; i++){
        t = i*i;
        l = 0;
        while(t){
            s[l++] = t%2 + '0';
            t/=2;
        }
        s[l] = '\0';
        for(int j=0, k = l-1, m = l/2; j<m; j++, k--){
            c = s[j];
            s[j] = s[k];
            s[k] = c;
        }
        printf("%s ", s);
    }   
    return 0;
}
