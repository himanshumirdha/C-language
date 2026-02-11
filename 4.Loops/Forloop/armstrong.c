#include <stdio.h>
int main()
{
    int lastdigit, sum, temp;
    for (int i = 1; i <= 500; i++)
    {
        sum = 0;
        temp = i;
        while (temp > 0)
        {
            lastdigit = temp % 10;
            sum = sum + (lastdigit * lastdigit * lastdigit);
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int lastdigit;
//     int sum;
//     int temp;

//     for (int i = 1; i <= 500; i++)

//     {
//         temp = i;
//         sum = 0;
//         while (temp > 0)
//         {
//             lastdigit = temp % 10;
//             sum = sum + (lastdigit * lastdigit * lastdigit);
//             temp = temp / 10;
//         }
//         if (i == sum)
//         {
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }