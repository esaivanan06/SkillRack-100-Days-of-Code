#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], o = 0;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2) o++;
    }
    int e = n - o;
    if(e>o){
        for(int i=0;  i<n; i++){
            if(!(arr[i]%2)) arr[i]--;
            printf("%d ", arr[i]);
        }
    }
    else if(o>e){
        for(int i=0; i<n; i++){
            if(arr[i]%2) arr[i]++;
            printf("%d ", arr[i]);
        }
    }
    else{
        for(int i=0; i<n; i++){
            arr[i] = arr[i]%2?arr[i]+1:arr[i]-1;
            printf("%d ", arr[i]);
        }
    }
    return 0;
}