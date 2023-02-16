// Program to add two numbers using fucntion
#include <stdio.h>
#include <conio.h>
void sum()
{
    int a, b, c;
    printf("Enter the numbers: \n");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("Sum of %d and %d = %d.\n", a, b, c);
    getch();
}
void main()
{
    sum();
    getch();
}