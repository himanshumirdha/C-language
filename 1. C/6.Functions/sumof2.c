#include <stdio.h>
int add(int a, int b) // int a &int b are arguments  in int add , int is return type
{
    return (a + b);
}
int main()
{

    int a;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    int sum = add(a, b); // pass by value
    printf("Sum is %d", sum);
    return 0;
}