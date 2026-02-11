#include <stdio.h>
int main()
{
    // {
    //     int arr[5] = {2, 4, 6, 8, 1};
    //     arr[3] = 23; //{2,4,6,23,1}
    //     printf("%d", arr[3]);

    // int arr[5];
    // arr[0] = 2;
    // arr[1] = 4;
    // arr[2] = 6;
    // arr[3] = 8;
    // arr[4] = 1;
    // printf("%d", arr[4]);

    // taking input

    // int arr[3];
    // printf("Enter first element : ");
    // scanf("%d", &arr[0]);
    // printf("Enter second element : ");
    // scanf("%d", &arr[1]);
    // printf("Enter third element : ");
    // scanf("%d", &arr[2]);
    // printf("%d", arr[2]);

    // float arr[4] = {2.3, 3.2, 4.3, 5.6};
    // printf("%f", arr[2]);

    // char arr[3] = {'A', 'd', '&'};
    // printf("%c", arr[2]);

    // int arr[5] = {2, 4, 6, 8, 1};
    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter element number : %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    // printf("%d", arr[1]);
    return 0;
}