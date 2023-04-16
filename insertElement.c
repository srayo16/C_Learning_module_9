#include <stdio.h>

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};

    for (int i = 5; i <= 3; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[3] = 10;
    for (int i = 0; i < 5; i++)
    {
        // printf("%d", i);
        printf("%d ", arr[i]);
    }

    // printf("%d", arr);

    return 0;
}