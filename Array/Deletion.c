#include <stdio.h>

int main()
{
    int n, a[5], i, pos, item;
    printf("Enter the size of an array is : ");
    scanf("%d", &n);
    printf("Enter elements of array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n == 0)
    {
        printf("Array is empty");
    }
    else
    {
        printf("From which position you wants to delete: ");
        scanf("%d", &pos);
        if (pos < 1 || pos > n + 1)
        {
            printf("Invalid Position");
        }
        else
        {
            item = a[pos - 1];
            printf("Deleted elements is: %d", item);
            for (i = pos - 1; i <= n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            printf("\nElements in array are : ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}