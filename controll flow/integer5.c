#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m > 0)
    {
        n = 1;
        printf("n is %d", n);
    }
    else if (m == 0)
    {
        n = 0;
        printf("n is %d", n);
    }
    else
    {
        n = -1;
        printf("n is %d", n);
    }
    return 0;
}
