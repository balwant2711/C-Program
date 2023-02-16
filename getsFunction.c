#include <stdio.h>
#include <conio.h>
int main()
{
    char str[40];
    printf("Enter the string.\n");
    gets(str);
    printf("You entered : %s", str);
    return 0;
}