#include <stdio.h>

int main()
{
    int age = 100;
    char name[30];
    printf("enter your name:");
    scanf("%[^\n]", name);
    printf("enter your age:");
    scanf("%d", &age);
    (age >= 18) ? (printf("is eligible")) : (printf("is not eligible"));
    return 0;
}