#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Alphabets from a to z are:\n");

    for (ch = 'a'; ch <= 'z'; ++ch)
    {
        printf("%c ", ch);
    }

    printf("\n");

    toupper(ch);
    for (ch = 'A'; ch <= 'Z'; ++ch)
    {
        printf("%c ", ch);
    }
    printf("\n");

    return 0;
}
