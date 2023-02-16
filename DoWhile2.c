#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    do
    {
        printf("Enter a number: \n");
        scanf("%d", &n);

        if (n % 7 != 0)
        {
            break;
        }

    } while (1);
    printf("Thank You");
    getch();
}