
// #include <stdio.h>
// int factorial(int a)
// {
//     int fact = 1;
//     for (int i = 2; i <= a; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     for (int i = 0; i <= n; i++)
//     {
//         for (int k = 0; k <= n - i; k++) // for loop for spaces
//         {
//             printf(" ");
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             int icj = factorial(i) / (factorial(j) * factorial(i - j));
//             printf(" %d", icj);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// below one is more proficient

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {

        for (int k = 0; k <= n - i; k++) // for loop for spaces
        {
            printf(" ");
        }
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf(" %d", first);
            first = first * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}