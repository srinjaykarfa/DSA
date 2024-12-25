#include <stdio.h>

int main()
{
    int n, a[5], i, num, pos;
    printf("Enter the size of an array is : ");
    scanf("%d", &n);
    printf("Enter elements of array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    if (n >= 5)
    {
        printf("Elements in array are : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
        printf("Overflow");
    }
    else
    {
        printf("Enter data you wants to insert: ");
        scanf("%d", &num);
        printf("Enter position:");
        scanf("%d", &pos);
        if (pos <= 0 || pos > n + 1)
        {
            printf("Invalid Position");
        }
        else
        {
            for (i = n - 1; i >= pos - 1; i--)
            {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            n++;
        }
        printf("Elements in array are : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}