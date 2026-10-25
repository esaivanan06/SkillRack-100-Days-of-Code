#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, x, t, r = 0;
    scanf("%d%d", &n, &x);
    for(; n>0; n--){
        scanf("%d", &t);
        if(t%10==x) r += t;
    }
    printf("%d", r);
    return 0;
}