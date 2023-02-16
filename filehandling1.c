#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    char name[40];
    FILE *file1;
    file1 = fopen("file1.txt", "w");
    if (file1 == NULL)
    {
        printf("Could not open a file. ");
        return 0;
    }
    printf("How many name you want to feed\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a name\n");
        scanf("%s", &name);
        fprintf(file1, "%s\n", name);
    }
}