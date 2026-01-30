#include <stdio.h>
int main()
{
    int sp, cp;
    printf("Enter cost price :");
    printf("Enter selling price :");
    scanf("%d"
          "%d",
          &cp, &sp);
    if (cp > sp)
    {
        printf("Seller has made profit");
    }
    if (sp > cp)
    {
        printf("Seller has made loss");
    }
    if (sp == cp)
    {
        printf("No profit no loss");
    }
    int x;
    x= cp-sp;
    printf("The seller has made loss: %d",x);

    return 0;
}