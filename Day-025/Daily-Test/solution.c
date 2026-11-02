#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, x, y;
    scanf("%d %d", &n, &x);
    while(--n){
        scanf("%d", &y);
        printf("%d ", x+y);
        x = y;
    }
    return 0;
}