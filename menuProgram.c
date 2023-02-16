#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int choice;
    printf("1. SIMPLE INTEREST \n");
    printf("2. Compound Interest \n");
    printf("SELECT OPTION ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        double p, r, t, si;
        printf("Enter principal ");
        scanf("%lf", &p);
        printf("Enter rate of interest");
        scanf("%lf", &r);
        printf("Enter Time");
        scanf("%lf", &t);
        si = (p * r * t) / 100;
        printf("Simple interest = %lf", si);
    }
    else if (choice == 2)
    {
        double p, r, t, si, A, ci;
        printf("Enter the principal amount ");
        scanf("%lf", &p);
        printf("enter the rate of interest ");
        scanf("%lf", &r);
        printf("Enter the time duration ");
        scanf("%lf", &t);
        A = (p * (pow(1 + (r / 100), t)));
        ci = A - p;
        printf("Compound interest for principal %lf rate of interest %lf and time duration %lf is = %lf", p, r, t, ci);
    }
    else
    {
        printf("Select correct Option");
    }
    getch();
}