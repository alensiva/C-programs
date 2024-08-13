#include <stdio.h>

int main()
{
    int arr[100] = {1, 21, 32, 101, 11, 10, 20};
    int size = sizeof(arr);
    int k = 10;
    int n = -1, i;

    for (i = 0; i < size; i++)
    {
        if (arr[i]==k)
        {
            n = i;
            break;
        }
    }

    if (n != -1)
    {
        printf("Element %d found at index %d.\n", k, n);
    }
    else
    {
        printf("Element %d not found in the array.\n", k);
    }

    return 0;
}
