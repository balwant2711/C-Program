#include <stdio.h>
#include <conio.h>
void main()
{
	int i, a1[5], a2[5], sum[5];
	printf("Enter first array:-\n");
	for (i = 0; i < 5; i++)
	{
		printf("a1[%d]=", i);
		scanf("%d", &a1[i]);
	}
	printf("Enter second array:-\n");
	for (i = 0; i < 5; i++)
	{
		printf("a2[%d]=", i);
		scanf("%d", &a2[i]);
	}
	printf("Addition of Array\n");
	for (i = 0; i < 5; i++)
	{
		sum[i] = a1[i] + a2[i];
	}

	printf("Sum of arrays:-");
	for (i = 0; i < 5; i++)
	{
		printf("\nsum[%d]=%d", i, sum[i]);
	}
	getch();
}
