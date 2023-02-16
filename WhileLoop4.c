#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("\nthe value of i is %d", i);
        }
        i++;
    }
    getch();
}