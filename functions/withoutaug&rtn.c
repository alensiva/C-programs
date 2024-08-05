#include <stdio.h>
void prod();
void main()
{
  printf("product of two numbers is\n");
  prod();
}
void prod()
{
 int a,b;
  printf("\nenter two numbers:");
 scanf("%d %d",&a,&b);
 printf("the product is %d",a*b);
}