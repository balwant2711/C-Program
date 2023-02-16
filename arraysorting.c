#include <stdio.h>
#include <conio.h>
void sort(int n, int *ptr);
void main()
{
    int a[20], n, i;
    printf("Enter the size of array ");
    scanf("%d", &n);
    printf("Enter the element of array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Displaying araay\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    sort(n, a);
    printf("\nSorted elements in ascending order of array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    getch();
}
void sort(int n, int *ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}
