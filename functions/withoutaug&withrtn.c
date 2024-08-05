#include<stdio.h>
int prod();
void main()
{
    int result;
    printf("\n multiplication ");
    result=prod();
    printf("%d",result);
}
int prod()
{
    int a,b;
    printf("\nenter two numbers:");
    scanf("%d%d",&a,&b);
    return a*b;
}