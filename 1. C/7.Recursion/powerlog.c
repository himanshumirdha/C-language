#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int x = power(a, b / 2); // its importnat to take variable you can write return power(a,b/2) * power(a,b/2)
    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return a * x * x; // 2kipower2 * 2kipower2 * 2 is equal to 2kipower5
    }
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