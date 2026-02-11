#include <stdio.h>
int main()
{
    int arr[6] = {1, 3, 5, 7, 9, 11};
    int evensum = 0;
    int oddsum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }
    int x = evensum - oddsum;
    printf("%d", x);

    return 0;
}