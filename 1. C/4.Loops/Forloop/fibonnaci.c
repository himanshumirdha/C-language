// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int a = 1;
//     int b = 1;
//     int sum = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     printf("The fibonnaci of %dth term is %d : ", n, sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }

    return 0;
}