// #include <stdio.h>
// int main()
// {
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int x = 12;
//     int count = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = i + 1; j < 8; j++) //(1,2) / (2,1) check na ho tabhi i+1
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 count++;
//                 printf("(%d,%d)\n", arr[i], arr[j]);
//             }
//         }
//     }
//     printf("%d", count);
//     return 0;
// }

// triplet pair whose sum is 12
#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 12;
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++) //(1,2) / (2,1) check na ho tabhi i+1
        {
            for (int k = j + 1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}


// these 2 above are best solutions hash map is which you will learn later