// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst = 3;
    int nsp = 1;
    for (int a = 1; a <= 2 * n - 1; a++)
    {
        printf("%d", a);
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }

        for (int l = 1; l <= nst; l++)
        {
            printf("%d", a);
            a++;
        }
        nst--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}