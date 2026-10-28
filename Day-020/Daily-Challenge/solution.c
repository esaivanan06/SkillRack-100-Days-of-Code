#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int mat[n][n];
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) scanf("%d", &mat[i][j]);
    scanf("%d", &k);
    for(int i=k; i<n; i++){
        for(int j=k; j<n; j++) printf("%d ", mat[i][j]);
        printf("\n");
    }
}