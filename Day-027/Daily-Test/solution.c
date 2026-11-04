#include<stdio.h>
#include<stdlib.h>

int main(){
    int m, n, t;
    scanf("%d%d", &m, &n);
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        printf("%d ", t);
    }
    printf("\n");
    for(int i=1; i<m-1; i++){
        scanf("%d", &t);
        printf("%d ", t);
        for(int j=1; j<n-1; j++){
            scanf("%d", &t);
            printf("* ");
        }
        scanf("%d", &t);
        printf("%d\n", t);
    }
    for(int j=0; j<n; j++){
        scanf("%d", &t);
        printf("%d ", t);
    }
    return 0;
}