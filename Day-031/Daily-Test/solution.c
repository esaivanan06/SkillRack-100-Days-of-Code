#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], max = -10000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        if (arr[i] == max)
            break;
    }

    return 0;
}