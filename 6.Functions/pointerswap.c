// #include <stdio.h>
// int main()
// {
//     int x;
//     printf("Enter x : ");
//     scanf("%d", &x);
//     int y;
//     printf("Enter y : ");
//     scanf("%d", &y);
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("The Value of x is %d & Value of y is %d", x, y);
//     return 0;
// }

// without using a third variable

// #include <stdio.h>
// int main()
// {
//     int x;
//     printf("Enter x : ");
//     scanf("%d", &x);
//     int y;
//     printf("Enter y : ");
//     scanf("%d", &y);
//     x = x + y;
//     y = x - y;
//     x = x - y;
//     printf("The Value of x is %d & Value of y is %d", x, y);
//     return 0;
// }

// using functions and pass by reference

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int x;
    printf("Enter x : ");
    scanf("%d", &x);
    int y;
    printf("Enter y : ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("The Value of x is %d & Value of y is %d", x, y);
    return 0;
}