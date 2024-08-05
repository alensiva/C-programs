#include<stdio.h>
int main()
{
    int i,arr[100],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements are ...");
    for(i=0;i<n;i++)
    {
        printf("%d\n",&arr[i]);
    }
}