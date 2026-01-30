#include <stdio.h>
int main()
{
    int n;
    int a;
    int b;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a = 65;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d", j);
            }
            else
            {
                printf("%c", a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}