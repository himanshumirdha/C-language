#include <stdio.h>
int main()
{
    int a, b;
    printf("First number is : ");
    scanf("%d", &a);
    printf("Second number is : ");
    scanf("%d", &b);
    int c = 1;
    for (int i = 1; i <= b; i++)
    {
        c = c * a;
    }
    printf("%d raised to power %d is %d", a, b, c);

    return 0;
}