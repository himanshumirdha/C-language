#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    int a[n][m];
    printf("Enter elements in the array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    // for (int j = 0; j < m; j++)
    // {
    //     if (j % 2 == 0)
    //     {
    //         for (int i = n - 1; i >= 0; i--)
    //         {
    //             printf("%d ", a[i][j]);
    //         }
    //     }
    //     else
    //     {
    //         for (int i = 0; i < n; i++)
    //         {
    //             printf("%d ", a[i][j]);
    //         }
    //     }
    //     printf("\n");
    // }

    for (int j = 0; j < m; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}