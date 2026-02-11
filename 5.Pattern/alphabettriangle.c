#include <stdio.h>
int main()
{
    int n;
    int a;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a = 65;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}