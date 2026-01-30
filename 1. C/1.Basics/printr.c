#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a); // a>b  a=dividend b= divisor
    printf("Enetr second number :");
    scanf("%d", &b);
    int q = a / b;
    int r;
    r = a - b * q;
    printf("The remainder when %d is divided by %d is %d", a, b, r);
    return 0;
}