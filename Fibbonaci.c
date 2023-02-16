#include <stdio.h>
#include <conio.h>
void main()
{
	int num, i;
	printf("Input number is \n");
	scanf("%d", &num);
	int n1 = 0, n2 = 1, nextterm;
	printf("%d, %d,", n1, n2);
	for (int i = 2; i < num; i++)
	{
		nextterm = n1 + n2;
		n1 = n2;
		n2 = nextterm;
		printf("%d, ", nextterm);
	}

	getch();
}