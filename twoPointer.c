#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array number: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // let array =[10,20,30,40,50]
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nAfter two pointer:\n");
    int temp;
    for (int i = 0; i < n; i++)
    {
        // printf("Enter\n");
        temp = arr[i];
        printf("%d\n", arr[(n - 1) - i]);
        arr[i] = arr[(n - 1) - i];
        arr[(n - 1) - i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}