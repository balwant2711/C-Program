#include <stdio.h>
#include <conio.h>
void main()
{
    double distance;
    printf("Enter the Distance between two Cities");
    scanf("%lf", &distance);
    printf("Distance between two cities in m is %lf m\n", distance * 1000);
    printf("Distance between two cities in cm is %lf cm\n", distance * 1000 * 100);
    printf("Distance between two cities in feet is %lf ft\n", distance * 3280.83);
    printf("Distance between two cities in inches is %lf inches\n", distance * 39370.1);
    getch();
}