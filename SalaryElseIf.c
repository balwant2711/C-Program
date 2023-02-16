#include <stdio.h>
#include <conio.h>
void main()
{
    char G;
    int yos, q;
    printf("Enter the gender of the person M/F or m/f ");
    scanf("%c", &G);
    printf("Enter the year of Service ");
    scanf("%d", &yos);
    printf("Enter the qualification 1 for PG and 0 for G");
    scanf("%d", &q);
    if ((G == 'm' || G == 'M') && (yos >= 10) && (q == 1))
    {
        printf("Salary is 78000");
    }
    else if ((G == 'm' || G == 'M') && (yos >= 10) && (q == 0))
    {
        printf("Salary is 65000");
    }
    else if ((G == 'm' || G == 'M') && (yos < 10) && (q == 1))
    {
        printf("Salary is 68000");
    }
    else if ((G == 'm' || G == 'M') && (yos < 10) && (q == 0))
    {
        printf("Salary is 55000");
    }
    else if ((G == 'f' || G == 'F') && (yos >= 10) && (q == 1))
    {
        printf("Salary is 73000");
    }
    else if ((G == 'f' || G == 'F') && (yos >= 10) && (q == 0))
    {
        printf("Salary is 62000");
    }
    else if ((G == 'f' || G == 'F') && (yos < 10) && (q == 1))
    {
        printf("Salary is 64000");
    }
    else if ((G == 'f' || G == 'F') && (yos < 10) && (q == 0))
    {
        printf("Salary is 50000");
    }
    getch();
}