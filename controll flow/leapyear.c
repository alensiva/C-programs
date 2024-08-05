#include <stdio.h>

int main()
{
    int a;
    printf("enter a year:");
    scanf("%d", &a);
    (a % 4 == 0) ? (printf("it is a leap year")) : (printf("it is not a leap year"));
    return 0;
}