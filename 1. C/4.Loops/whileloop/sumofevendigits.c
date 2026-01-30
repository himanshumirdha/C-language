#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int lastdigit;
    int sum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        if (lastdigit % 2 == 0)
        {
            sum = sum + lastdigit;
        }
        n = n / 10;
    }
    printf("The sum of all even digits are %d", sum);
    return 0;
}