#include <stdio.h>
#include <conio.h>
void add(int, int);
void main()
{
    int a, b;
    printf("Enter the values\n");
    scanf("%d%d", &a, &b);
    add(a, b);
    getch();
}
void add(int x, int y)
{
    int c;
    c = x + y;
    printf("Sum of %d and %d is = %d", x, y, c);
}