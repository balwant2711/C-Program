#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b, c, d, e, per;
    printf("Enter the marks of student in 5 subjects.\n ");
    printf("Physics: ");
    scanf("%f", &a);
    printf("Chemistry: ");
    scanf("%f", &b);
    printf("Mathematics: ");
    scanf("%f", &c);
    printf("English: ");
    scanf("%f", &d);
    printf("Hindi: ");
    scanf("%f", &e);
    per = (a + b + c + d + e) / 5;
    printf("\nTotal marks obtained by the student is %0.2f.", (a + b + c + d + e));
    printf("\nPercentage secured by the student is %0.2f.\n", per);
    if (per < 50)
    {
        printf("Grade obtained is F");
    }
    else if (per >= 50 && per < 60)
    {
        printf("Grade obtained is D");
    }
    else if (per >= 60 && per < 70)
    {
        printf("Grade obtained is C");
    }
    else if (per >= 70 && per < 80)
    {
        printf("Grade obtained is B");
    }
    else if (per >= 80 && per < 90)
    {
        printf("Grade obtained is A");
    }
    else
    {
        printf("Grade obtained is A+");
    }

    getch();
}