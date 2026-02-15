#include <stdio.h>
#include <limits.h>
int main()
{
    int r;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    int c;
    printf("Enter number of columns : ");
    scanf("%d", &c);
    printf("Enter all elements : \n");
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max = INT_MIN;
    int row = 0;
    int col = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("The maximum element is %d & its index is {%d,%d} ", max, row, col);
}