#include <stdio.h>
#include<math.h>
int main()
{
    int i, n, sum = 0,avg=0;
    int a[100];
    printf("enter the number of elements:");
    scanf("%d", &n);
    printf("\nenter the elements:");
    for (i = 0; i < n; i++)
    {
        printf("\n element %d :", i);
        scanf("%d", &a[i]);
    }
    

    printf("\naverage of elements:");
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
     avg=sum/n;
     printf("%d",avg);


    return 0;
}   
