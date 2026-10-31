#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int t, d, s = 0;
    while(n--){
        scanf("%d", &t);
        d = t%10;
        if(d>=5) t += 10 - d;
        else t -= d;
        s += t;
    }
    printf("%d", s);
    return 0;
}