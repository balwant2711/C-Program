// factorial using Function
#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int n, F;
    printf("Enter the number you want to calculate the factorial. \n");
    scanf("%d", &n);
    F = fact(n);
    printf("\nFactorial of %d is = %d", n, F);
    getch();
}
int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}