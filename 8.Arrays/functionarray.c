#include <stdio.h>
void fun(int a[])
{
    a[0] = 2;
    a[1] = 9;
    return;
}
int main()
{
    int arr[5] = {9, 2};
    printf("%d %d\n", arr[0], arr[1]);
    fun(arr);
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}