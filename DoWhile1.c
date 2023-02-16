#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 0;
    do
    {
        if (i >= 10)
        {
            printf("\nThe value of i is %d", i);
        }
        i++;
    } while (i <= 20);

    // int i=1;
    // do
    // {
    //     printf("%d\n",i);
    //     i++;
    // } while (i<=4);

    getch();
}