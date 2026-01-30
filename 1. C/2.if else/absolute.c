#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);
    }
    printf("The absolute number is : %d", n);
    return 0;
}