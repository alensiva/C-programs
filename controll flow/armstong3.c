#include <stdio.h>
#include <math.h>

int main()
{
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    if (lower > upper)
    {
        printf("Invalid \n");
        return 1;
    }

    printf("Armstrong numbers between %d and %d are:\n", lower, upper);

    for (int num = lower; num <= upper; num++)
    {
        int temp = num;
        int remainder, n = 0, result = 0;

        while (temp != 0)
        {
            temp /= 10;
            ++n;
        }

        temp = num;

        while (temp != 0)
        {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        if (result == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
