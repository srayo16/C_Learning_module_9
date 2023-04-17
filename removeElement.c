#include <stdio.h>

int main()
{
    int n;
    printf("Enter the n of array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("Enter the pos of array: ");
    scanf("%d", &pos);
    arr[pos] = 0;

    for (int i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    // arr[n] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}