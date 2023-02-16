#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, n, r1, c1, r2, c2;
    int a[20][20], b[20][20], prod[20][20];
    printf("Enter the dimension of first array");
    scanf("%d%d", &r1, &c1);
    printf("Enter the dimesnion of second array");
    scanf("%d%d", &r2, &c2);
    if (c1 == r2)
    {
        printf("Enter the elements of first matrix \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of first matrix \n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }
    printf("Display first matrix \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Display second matrix \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Product of Matrix a and b \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {

            prod[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                prod[i][j] = prod[i][j] + (a[i][k] * b[j][k]);
            }
        }
    }
    printf("product of the given matirx is \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }
    getch();
}