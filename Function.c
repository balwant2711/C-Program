#include <stdio.h>
#include <conio.h>
void sum(int, int);
void main()
{
    int x, y, s, r;
    printf("Enter the first two values \n");
    scanf("%d%d", &x, &y);
    printf("Enter the second two values\n");
    scanf("%d%d", &s, &r);
    sum(x, y);
    sum(s, r);
    getch();
}
void sum(int a, int b)
{
    printf("sum of two no. = %d\n", a + b);
}
