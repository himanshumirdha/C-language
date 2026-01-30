#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = 65;
        for (int j = 1; j <= n; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}