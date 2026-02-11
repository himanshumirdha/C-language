#include <stdio.h>
int main()
{
    float pi = 3.1415;
    float r;
    printf("Enter Radius: ");
    scanf("%f", &r);
    float area = pi * r * r;
    printf("Area of circle is: %f", area);
    return 0;
}