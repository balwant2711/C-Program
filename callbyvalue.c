#include <stdio.h>
#include <conio.h>
void swap(int, int);
void main()
{
    int a, b;
    printf("Enter the values\n");
    scanf("%d%d", &a, &b);
    printf("Value of a before swap is %d.\n", a);
    printf("Value of b before swap is %d.\n", b);
    swap(a, b);
    printf("Value of a after swap is %d\n", a);
    printf("Value of b after swap is %d.\n", b);
    getch();
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}