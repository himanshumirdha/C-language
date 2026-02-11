// two steps

#include <stdio.h>
int stairpath(int n)
{
    if (n <= 2) 
    {
        return n;
    }
    return stairpath(n - 2) + stairpath(n - 1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("%d", stairpath(n));
    return 0;
}

// three steps

// #include <stdio.h>
// int stairpath(int n)
// {
//     if (n <= 2)
//     {
//         return n;
//     }
//     if (n == 3)
//         return n + 1;
//     return stairpath(n - 1) + stairpath(n - 2) + stairpath(n - 3);
// }
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     printf("%d", stairpath(n));
//     return 0;
// }