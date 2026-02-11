#include <stdio.h>
int fibonaci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonaci(n - 1) + fibonaci(n - 2);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", fibonaci(n));
    return 0;
}