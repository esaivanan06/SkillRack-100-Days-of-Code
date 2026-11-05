#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    printf("%d ", arr[0]+arr[n-1]);
    for(int i=1; i<n; i++) printf("%d ", arr[i-1]+arr[i]);
    return 0;
}