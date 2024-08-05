#include <stdio.h>

int main()
{
    int i, n,largest;
    int a[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ",i);
        scanf("%d", &a[i]);
    }
      largest = a[0];
      for (i = 1; i < n; i++) 
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
