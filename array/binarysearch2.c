#include <stdio.h>
int main()
{
    int i, n, ser;
    int a[100];
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("\nenter the %d elements:");
    for (i < 0; i < n; i++)
    {
        printf("\nelement %d", i);
        scanf("%d", &a[i]);
    }
    printf("enter the element to search :");
    scanf("%d", &ser);

    for (i=0; i < n; i++)
    {
        a[i] == ser;
    }
    printf("%d element is present", ser);

    return 0;
}
