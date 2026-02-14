#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[7] = {12, 21, 30, 42, 55, 6, 7};
    int x = 677;
    int idx = 2;
    bool flag = false; // element is not present in array
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // element is present in the array
            idx = i;
            break;
        }
    }
    if (flag == false)
    {
        printf("%d is not present in the array", x);
    }
    else
    {
        printf("%d is present in the array and its index is %d", x, idx);
    }

    return 0;
}