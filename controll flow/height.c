#include <stdio.h>

int main()
{
    float height;

    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    if (height < 0)
    {
        printf("Invalid height entered.\n");
    }
    else if (height < 150)
    {
        printf("Person is Short.\n");
    }
    else if (height < 165)
    {
        printf("Person is Average.\n");
    }
    else if (height < 180)
    {
        printf("Person is Tall.\n");
    }
    else
    {
        printf("Person is Very Tall.\n");
    }

    return 0;
}