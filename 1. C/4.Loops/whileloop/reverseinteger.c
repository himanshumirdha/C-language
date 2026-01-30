

//reverse and sum of reverse and original num

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int originalNum = n;
    int lastdigit;
    int reverse = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
    printf("Reversed number is %d\n", reverse);
    int sum = originalNum + reverse;
    printf("Sum is %d", sum);
    return 0;
}