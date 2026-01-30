#include <stdio.h>
int fibonnaci(int i)
{
    int a = 1;
    int b = 1;
    int sum = 0;
    for (int j = 1; j <= i; j++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n-2; i++)
    {
        printf("%d ", fibonnaci(i));
    }
    return 0;
}