#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter two coordinates :");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0)
    {
        printf("It lies on origin");
    }
    else if (x == 0)
    {
        printf("it lies on y axis");
    }
    else if (y == 0)
    {
        printf("It lies on x axis");
    }
    else
    {
        printf("The point does not lie on x or y axis");
    }
    return 0;
}