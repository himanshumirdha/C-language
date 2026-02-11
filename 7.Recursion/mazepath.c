// #include <stdio.h>
// int maze(int cr, int cc, int er, int ec)
// {
//     int rightways = 0;
//     int downways = 0;
//     if (cr == er && cc == ec)
//         return 1;
//     if (cr == er)
//     {
//         rightways += maze(cr, cc + 1, er, ec);
//     }
//     if (cc == ec)
//     {
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     if (cr < er && cc < ec)
//     {
//         rightways += maze(cr, cc + 1, er, ec);
//         downways += maze(cr + 1, cc, er, ec);
//     }
//     int totalways = rightways + downways;
//     return totalways;
// }
// int main()
// {
//     int n, m;
//     printf("Enter number of rows in a maze : ");
//     scanf("%d", &n);
//     printf("Enter number of columns in a maze : ");
//     scanf("%d", &m);
//     int nOofways = maze(1, 1, n, m);
//     printf("%d", nOofways);
//     return 0;
// }

//  more optimized way

#include <stdio.h>
int maze(int n, int m)
{
    int rightways = 0;
    int downways = 0;
    if (n == 1 && m == 1)
    {
        return 1;
    }
    if (n == 1)
    {
        rightways += maze(n, m - 1);
    }
    if (m == 1)
    {
        downways += maze(n - 1, m);
    }
    if (n > 1 && m > 1)
    {
        rightways += maze(n, m - 1);
        downways += maze(n - 1, m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n, m;
    printf("Enter number of rows in a maze : ");
    scanf("%d", &n);
    printf("Enter number of columns in a maze : ");
    scanf("%d", &m);
    int nOofways = maze(n, m);
    printf("%d", nOofways);
    return 0;
}