#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n%2==0){
        printf("valid");
        return 0;
    }
    bool flag = true;
    for(int i=3; i*i<=n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag) printf("valid");
    else printf("invalid");
    return 0;
}