#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the no.");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    printf("Factorial of %d is %d.", n, fact);
    getch();
}