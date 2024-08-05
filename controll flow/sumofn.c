#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    printf("enter the number limit:");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("sum of %d numbers", sum);

    return 0;
}