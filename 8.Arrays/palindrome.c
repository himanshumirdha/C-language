// #include <stdio.h>
// #include <stdbool.h>
// void reverse(int arr[])
// {
//     bool flag = true; // it is  a palindrome
//     int i = 0;
//     int j = 4;
//     for (int i = 0, j = 4; i < j; i++, j--)
//     {
//         if (arr[i] != arr[j])
//         {
//             flag = false;
//             break;
//         }
//     }

//     if (flag == false)
//     {
//         printf("It is not a palindrome");
//     }
//     else
//     {
//         printf("It is  a palindrome");
//     }
// }
// int main()
// {
//     int arr[5] = {5, 2, 3, 2, 1};
//     reverse(arr);
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[5] = {1, 5, 3, 2, 1};
    bool flag = true; // it is  a palindrome
    int i = 0;
    int j = 4;
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        printf("It is not a palindrome");
    }
    else
    {
        printf("It is  a palindrome");
    }
}