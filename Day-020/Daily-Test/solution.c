#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, n, m;
    scanf("%d%d%d", &x, &n, &m);
    if(m>=x/5) x %= 5;
    else x -= m*5;
    if(x<=n) printf("%d", x);
    else printf("-1");
}