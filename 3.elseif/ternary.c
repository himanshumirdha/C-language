#include <stdio.h>
int main()
{
    // a number is even or odd
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("Even number") : printf("Odd number");  // ternary operator = expression1 ? exp2 : exp 3 ;
    return 0;
}