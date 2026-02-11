#include <stdio.h>
int factorial(int i)
{
    int fact = 1;
    for (int j = 1; j <= i; j++)
    {
        fact = fact * j;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("The factorial of %d is %d\n", i, factorial(i));
    }

    return 0;
}