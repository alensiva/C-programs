#include<stdio.h>
int main()
{
    int sum=0,i,r;
    for(i=11;i<=1000;i++)
    {
    while(i%2!=0)
    {
    r = i % 10;
    sum = sum + (r * r * r);
    i = i / 10;
    }
    printf("%d\nsksdkjsajdlbh",sum);
    }
    
    return 0;
}


