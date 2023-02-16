#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, S, Area;
    printf("Enter First side of triangle");
    scanf("%f", &a);
    printf("Enter second side of triangle");
    scanf("%f", &b);
    printf("Enter third side of triangle");
    scanf("%f", &c);
    S = (a + b + c) / 2;
    Area = sqrt(S * (S - a) * (S - b) * (S - c));
    printf("Area of triangle using Heron's Formula  is %f", Area);
}