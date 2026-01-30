// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             printf("*");
//         }
//         for (int l = 1; l <= i - 1; l++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
//

// better one below

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int nst = 1;
//     int nsp = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//         }
//         nsp = nsp - 1;

//         for (int k = 1; k <= nst; k++)
//         {
//             printf("*");
//         }
//         nst = nst + 2;
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int nst = 1;
//     int nsp = 3;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= nsp; j++)
//         {
//             printf(" ");
//         }
//         nsp = nsp - 1;

//         for (int k = 1; k <= nst; k++)
//         {
//             printf("%d", k);
//         }
//         nst = nst + 2;
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
    int nst = 1;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;

        for (int k = 1; k <= nst; k++)
        {
            printf("%c", a);
            a++;
        }

        nst = nst + 2;
        printf("\n");
    }
    return 0;
}
