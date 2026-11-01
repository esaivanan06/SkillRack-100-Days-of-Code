#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, t, x = 0, y = 0;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &t);
        x += t%10;
        t/=10;
        y += t%10;
    }
    printf("%d %d", y, x);
    return 0;
}