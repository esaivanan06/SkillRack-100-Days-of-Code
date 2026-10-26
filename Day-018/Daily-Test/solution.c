#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int n, t;
    scanf("%d", &n);
    bool flag = false;
    for(: n>0; n--){
        scanf("%d", &t);
        if(flag) printf("%d ", t);
        else if(t%2==0){
            flag = true;
            printf("%d", t);
        }
    }
}