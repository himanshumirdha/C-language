// #include <stdio.h>
// void greet()     //greet function name
// {
//     printf("Good morning\n");
//     printf("How are you?\n");
//     return;
// }
// int main()
// {

//     greet();   // these all are function call , calling a function
//     greet();
//     greet();
//     return 0;
// }
// how function works


#include <stdio.h>
void england()
{
    printf("You are in england");
    return;
}
void australia()
{
    printf("You are in australia\n");
    england();
    return;
}
void india()
{
    printf("You are in india\n");
    australia();
    return;
}
int main()
{
    india();
    return 0;
}