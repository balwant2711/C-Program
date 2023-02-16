#include <stdio.h>
#include <conio.h>
void main()
{
    // int i;
    // i = 1;
    // while(i<10)
    // {
    //     printf("Balwant Singh\n");
    //     i++;
    // }
    int i, n;
    printf("Enter the number \n");
    scanf("%d\n", &n);
    i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    getch();
}