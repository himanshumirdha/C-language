// Take 3 positive integer input and print the greatest of them

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("The 1st number is : ");
    scanf("%d", &a);

    printf("The 2nd number is : ");
    scanf("%d", &b);

    printf("The 3rd number is : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }
}