#include <stdio.h>
#include <conio.h>
int sum();
void main()
{
    int add;
    add = sum();
    printf("sum of two no. = %d", add);
    getch();
}
int sum()
{
    int a, b;
    printf("Enter two values\n");
    scanf("%d%d", &a, &b);
    return (a + b);
}