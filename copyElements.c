#include <stdio.h>

int main()
{
    int n;
    int n2;
    printf("Enter first array number: ");
    scanf("%d", &n);
    int arr[n];
    // input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter second array number: ");
    scanf("%d", &n2);
    int arr2[n2];

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // copying

    int arrCopy[n + n2];
    int i = 0, j = 0;
    while (i <= n + n2)
    {
        if (i < n)
        {
            arrCopy[i] = arr[i];
        }
        else if (i >= n)
        {
            // for (int j = 0; j < n2; j++)
            // {
            arrCopy[i] = arr2[j];
            //     break;
            //     // printf("issue: %d \n", arr2[(n - 1) - (i - 1)]);
            // }
            j++;
        }
        i++;
    }

    // for (int i = 0, j=0; i <= n + n2; i++, j++)
    // {
    //     // printf("%d ", arr2[i]);
    //     // arrCopy[i]=arr[i];
    //     if (i < n)
    //     {
    //         arrCopy[i] = arr[i];
    //     }
    //     else if (i >= n)
    //     {
    //         // for (int j = 0; j < n2; j++)
    //         // {
    //         //     arrCopy[i] = arr2[j];
    //         //     break;
    //         //     // printf("issue: %d \n", arr2[(n - 1) - (i - 1)]);
    //         // }
    //     }
    // }

    // printing
    // printf("\nFirst array:\n");

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\nSecond array:\n");
    // for (int i = 0; i < n2; i++)
    // {
    //     printf("%d ", arr2[i]);
    // }
    printf("\nDuplicate array:\n");
    for (int i = 0; i < n + n2; i++)
    {
        printf("%d ", arrCopy[i]);
    }

    return 0;
}