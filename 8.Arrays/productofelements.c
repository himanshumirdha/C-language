#include <stdio.h>
int main()
{
    int arr[5];
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
        product *= arr[i];
    }
    printf(" product is %d", product);
    return 0;
}