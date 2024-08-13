#include <stdio.h>
#include <string.h>
int main()
{
    char str[100]="hello world",ch;
    int i, n, count=0;
    n = strlen(str);
    printf("\n enter the character to search:");
    scanf("%c", &ch);
    for (i = 0; i < n; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }

    printf("\n the number of characters:%d", count);
    return 0;
}