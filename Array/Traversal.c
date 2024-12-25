#include <stdio.h>

int main()
{
    int n,a[50] ,i;
    printf("Enter the size of an array is : ");
    scanf("%d", &n);
    printf("Enter elements of array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements in array are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}