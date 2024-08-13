#include <stdio.h>

int main()
{
    int n, array[n];
    int temp[n], k = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            temp[k] = array[i];
            k++;
        }
    }

    printf("Even numbers array: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
