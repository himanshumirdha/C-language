#include <stdio.h>
int main()
{
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf(" sum is %d", sum);
    return 0;
}