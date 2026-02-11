// 5.7-print 0.7

#include <stdio.h>
int main()
{
    float x;
    printf("The float number is :");
    scanf("%f", &x);
    int y = x;
    float z = x - y;
    printf("%f", z);
    return 0;
}