#include <stdio.h>
#include <conio.h>
void main()
{
    int x;
    int i = 1;
    printf("Enter the no\n");
    scanf("%d", &x);
    while (i <= 10)
    {
        printf("%d * %d = %d\n", x, i, x * i);
        i++;
    }
    getch();
}