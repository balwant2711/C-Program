// program to find greatest of three numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter first number \n");
    scanf("%d", &num1);
    printf("Enter second number \n");
    scanf("%d", &num2);
    printf("Enter Third number \n");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is greater than %d and %d", num1, num2, num3);
        }

        else
        {
            printf("%d is greater than %d and %d", num3, num1, num2);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is greater than %d and %d", num2, num3, num1);
        }
        else
        {
            printf("%d is greater than %d and %d", num3, num1, num2);
        }
    }
    getch();
}