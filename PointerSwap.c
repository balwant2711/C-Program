#include <stdio.h>
#include <conio.h>
void swap(int *p, int *q);
void main()
{
    int a, b;
    printf("Enter the values.");
    scanf("%d%d", &a, &b);
    printf("Value of a before swap = %d\n", a);
    printf("Value of b before swap = %d\n", b);
    swap(&a, &b);
    printf("Value of a after swap = %d\n", a);
    printf("Value of b after swap = %d\n", b);
    getch();
}
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}