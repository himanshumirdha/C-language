// #include <stdio.h>
// void sum(int n, int s)
// {
//     if (n == 0)
//     {
//         printf("%d", s);
//         return;
//     }
//     sum(n - 1, s + n);
//     return;
// }
// int main()
// {

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     sum(n, 0);
//     return 0;
// }

// return type

#include <stdio.h>
int sum(int n)
{
    if (n <= 1)
        return 1;
    return n + sum(n - 1);
}
int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
    return 0;
}
