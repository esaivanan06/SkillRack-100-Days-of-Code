#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main()
{
    int n, t;
    bool flag = false;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        if(t%10!=1 && t%10!=6){
            printf("%d ", t*2);
            flag = true;
        }
    }
    if(!flag) printf("-1");
    return 0;
}