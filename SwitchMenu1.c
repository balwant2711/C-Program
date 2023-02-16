#include <stdio.h>
#include <conio.h>
void main()

{
    char O;
    int num1, num2;
    printf("Enter first number");
    scanf("%d", &num1);
    printf("Enter second number");
    scanf("%d", &num2);
    printf("\n1. Addition ('+')");
    printf("\n2. Substraction ('-')");
    printf("\n3. Multiplication ('*')");
    printf("\n4. Division ('/')");

    printf("\nSelect the option ");
    scanf("%c", &O);
    switch (O)
    {
    case '+':
        printf("The sum of first number and second number is %d", num1 + num2);
        break;
    case '-':
        printf("The substraction of first number and second number is %d", num1 - num2);
        break;
    case '*':
        printf("The multiplication of first number and second number is %d", (num1 * num2));
        break;
    case '/':
        printf("The division of first number and second number is %d", num1 / num2);
        break;
    default:
        break;
    }
    getch();
}
