// C program to find reverse of integer and check whether number is plaindrome
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, sum = 0, temp, rem;
    printf("Enter the number = ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    printf("Reversed number is %d\n", sum);
    if (temp == sum)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}