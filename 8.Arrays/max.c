#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN; // or arr[0]
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum element is %d", max);
    return 0;
}