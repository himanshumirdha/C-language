#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    double m1,m2;
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if (m1 == m2)
    {
        printf("All three points fall in straight line");
    }
    else
    {
        printf("The points do not fall in straight line");
    }

    // printf("Enter x1 :");
    // scanf("%f", &x1);
    // printf("Enter y1 :");
    // scanf("%f", &y1);
    // printf("Enter x2 :");
    // scanf("%f", &x2);
    // printf("Enter y2 :");
    // scanf("%f", &y2);
    // printf("Enter x3 :");
    // scanf("%f", &x3);
    // printf("Enter y3 :");
    // scanf("%f", &y3);

    return 0;
}