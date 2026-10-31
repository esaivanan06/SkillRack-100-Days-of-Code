#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, r = 0;
    scanf("%d", &n);
    if(n%2) n = n/2 + 1;
    else n = -(n/2);
    printf("%d", n);
    return 0;
}