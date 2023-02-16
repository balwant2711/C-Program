#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{

    int a = 5 * 2 - 2 * 3;
    int b = 5 * 2 / 2 * 3;   /*same precedence *,/,%, will solve from left to right*/
    int c = 5 * (2 / 2) * 3; /*bracket will be solved first*/
    int d = 5 + 2 / 2 * 3;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%d \n", d);
    getch();
}