#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int c = 1; c <= 1; c++)
    {
        int q = n;
        for (int s = 1; s <= n+1; s++)
        {
            printf("%d", s);
        }
        for (int t = 1; t <= n; t++)
        {
            printf("%d", q);
            q--;
        }
        printf("\n");
    }
    int non = n;
    int nsp = 1;
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        int b = n + 1 - i;
        for (int j = 1; j <= non; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= non; l++)
        {
            printf("%d", b);
            b--;
        }
        non--;
        nsp += 2;
        printf("\n");
    }
    return 0;
}