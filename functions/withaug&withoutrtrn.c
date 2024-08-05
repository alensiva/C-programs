#include <stdio.h>
void prod(int, int);
void main()   
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    prod(a,b);
}
void prod(int a,int b)
{
    printf("\nproduct is",a*b);
}