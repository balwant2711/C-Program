// factorial using do while looop
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    int fact = 1;
    int i = 1;
    do
    {
        fact = fact * i;
        i++;
    } while (i <= n);
    printf("Factorial of %d is %d", n, fact);
    getch();
}