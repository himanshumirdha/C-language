#include <stdio.h>
int power(int a, int b)
{
    if (b == 1)
        return a;
    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    printf("Enter base : ");
    scanf("%d", &a);
    printf("Enter exponent : ");
    scanf("%d", &b);
    int ans = power(a, b);
    printf("%d raised to power %d is %d", a, b, ans);
    return 0;
}