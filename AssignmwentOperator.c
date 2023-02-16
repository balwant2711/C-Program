#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    a = 1;
    b = 4;

    /*  a += b  -- a= a + b */
    /*  a -= b  -- a= a - b */
    /*  a *= b  -- a= a * b */
    /*  a /= b  -- a= a / b */
    /*  a %= b  -- a= a % b */

    /*a += b;*/
    /*a -= b;*/
    /*a *= b;*/
    /*a /= b;*/
    a %= b;
    printf("%d", a);
    getch();
}