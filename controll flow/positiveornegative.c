#include <stdio.h>

int main()
{
    int a;
    printf("enter a value  ");
    scanf("%d", &a);
    (a > 0) ? (printf("positive")) : (printf("negative"));
    return 0;
}