#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    printf("Enter  a number : ");
    scanf("%d", &x);
    int root = sqrt(x);
    printf("Square root is %d", root);
    return 0;
}