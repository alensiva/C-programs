#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two integers:");
    scanf("%d", &a);
    scanf("%d", &b);
    (a != b) ? (printf("two integers are not equal")) : (printf("two integers are equal"));
    return 0;
}