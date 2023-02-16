#include <stdio.h>
#include <conio.h>
void main()
{
  int r, c, a[30][30], b[30][30], sum[30][30], i, j;
  printf("Enter the number of rows");
  scanf("%d", &r);
  printf("Enter the number of columns");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      printf("Enter element a[%d%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      printf("Enter element b");
      scanf("%d", &b[i][j]);
    }

  printf("Addition of matrices\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; i++)
  {

    for (j = 0; j < c; j++)
    {
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }

  getch();
}
