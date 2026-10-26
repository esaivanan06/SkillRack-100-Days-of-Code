#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[101], t;
    int k;
    scanf("%s%d", s, &k);
    int l = strlen(s), m = l/2;
    k/=2;
    for(int i=m-k, j=l%2?m+k:m+k-1; i<j; i++, j--){
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    printf("%s", s);
}