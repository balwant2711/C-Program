#include <stdio.h>
#include <conio.h>
int add(int, int);
void main()
{
    int a, b, c;
    printf("Enter the values\n");
    scanf("%d%d", &a, &b);
    c = add(a, b);
    printf("Sum of %d and %d is %d.", a, b, c);
    getch();
}
int add(int x, int y)
{
    int z;
    z = x + y;
    return (z);
}
