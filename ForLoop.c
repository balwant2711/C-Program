#include <stdio.h>
#include <conio.h>
void main()
{
    // int i,j;

    // for ( i =5; i>=1;i--)
    // {

    //     for (j=1; j<=i; j++)
    //     {

    //             printf("%d",j);/* code */

    //     }

    //     printf("\n");
    // }

    // int i,n;
    // printf("Enter the no.\n");
    // scanf("%d",&n);

    // for(i=0; i<=n; i++)
    // {
    //     printf("%d \n",i);
    // }

    int n;
    printf("Enter the no.");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        fact = fact * i;
    }
    printf("Factorial of %d is %d.", n, fact);
    getch();
}