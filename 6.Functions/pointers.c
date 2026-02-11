// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int *x = &a; // *x address store kar raha hai // pointer
//     *x = 7;  // a is changed
//     printf("%p\n", &a); // address of a
//     printf("%p\n", x);  // address of a
//     printf("%p\n", &x); // address of x
//     printf("%d", *x);   // value in a print karega

//     return 0;
// }

// double pointer

#include <stdio.h>
int main()
{
    int a = 5;
    int *x = &a;  // int* -> int ka address store karta hai
    int **y = &x; //  int**-> int* ka address store karta hai
    printf("%p\n", &x);
    printf("%p", y);

    return 0;
}