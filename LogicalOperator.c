#include <stdio.h>
#include <conio.h>
void main()
{
    /*Logical operators
        && AND (both expression needs to be true)
        || OR (One of the expression needs to be true)
        ! NOT(if the expression is true then it will be false ,if expression is false then it will be true)
    */
    printf("%d \n", 3 > 5 && 5 > 2);
    printf("%d \n", 3 > 5 || 5 > 2);
    printf("%d \n", !((5 > 1) && (3 > 4)));
}