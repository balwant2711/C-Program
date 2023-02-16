#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int sum = 0;
    printf("Enter number\n");
    scanf("%d", &n);
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {

        sum = sum + i;
        printf("%d\n", j);
    }
    printf("%d\n", sum);

    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", n * i);
    }
    getch();

    // int sum = 0;
    // for (int i = 5; i <= 50; i++)
    // {
    //     sum = sum +i;
    // }
    // printf("sum of all between 5 and 50 is %d",sum);
}