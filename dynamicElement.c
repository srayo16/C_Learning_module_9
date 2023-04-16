#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array number: ");
    scanf("%d", &n);
    int arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        // int a;
        // scanf("%d", &a);
        // arr[i] = a;
        scanf("%d", &arr[i]);
    }
    int pos, val;
    printf("Enter the position and value: ");
    scanf("%d %d", &pos, &val);

    for (int i = n; i >= pos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}