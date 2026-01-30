#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)   //outer loop - np.of lines
    {
        for (int i = 1; i <= m; i++) //inner loop - no.of stars in each line
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}