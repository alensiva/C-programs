#include<stdio.h>
#include<string.h>
int  main()
{
    char s1[100]={"my name is alen siva"};
    char s2[100];
    strcpy(s2,s1);
    char *sub;
    sub=strstr(s2,"alen");
    printf("the substring is:%s",sub);
    return 0;
}