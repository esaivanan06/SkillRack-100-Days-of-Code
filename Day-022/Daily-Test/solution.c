#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], x = -1;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2) x = i;
    }
    while(x>=0) printf("%d ", arr[x--]);
    return 0;
}