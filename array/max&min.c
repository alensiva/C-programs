#include <stdio.h>
int main()
{
    int i, n, max, min;
    int a[100];
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("\nenter the %d elements:");
    for (i = 0; i < n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The maximum in the array is: %d\n", max);
    min = a[0];
    for (i = 1; i < n; i++)

    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("The minimum in the array is: %d\n", min);

    return 0;
}