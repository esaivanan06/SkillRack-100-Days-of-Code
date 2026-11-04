#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n, l = 0;
    char bin[33], t;
    scanf("%d", &n);
    while(n){
        bin[l++] = n%2 + '0';
        n/=2;
    }
    bin[l] = '\0';
    for(int i=0, m=l/2; i<m; i++){
        t = bin[i];
        bin[i] = bin[l-i-1];
        bin[l-i-1] = t;
    }
    printf("%s\n", bin);
    for(int i=1; i<=l-2; i++){
        printf("%c", bin[i]);
        for(int j=0; j<l-2; j++) printf("*");
        printf("%c\n", bin[l-i-1]);
    }
    while(l--) printf("%c", bin[l]);
    return 0;
}