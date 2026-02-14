#include <stdio.h>
void reverse(int arr[])
{
    // using while loop
    int i = 0;
    int j = 4;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;

    // usin for loop
    // for (int i = 0, j = 4; i < j; i++, j--)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    // return;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}