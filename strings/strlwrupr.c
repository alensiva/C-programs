#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    printf("String is: %s", str);
    printf("\nUpper String is: %s", strupr(str));
    printf("\nlowe String is: %s", strlwr(str));

    return 0;
}



