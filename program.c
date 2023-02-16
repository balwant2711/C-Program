#include <stdio.h>
#include <conio.h>
int main()
{
    float sp, cp;
    printf("Enter Selling Price");
    scanf("%f", &sp);

    printf("Enter Cost price");
    scanf("%f", &cp);
    if (sp > cp)
    {
        printf("Seller has made profit of %f", sp - cp);
    }
    else
    {
        printf("Seller has incurred a loss of %f", cp - sp);
    }
    getch();
}