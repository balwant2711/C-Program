#include <stdio.h>
int main()
{
    FILE *file1;
    file1 = fopen("file2.txt", "w");
    fprintf(file1, " Welcome to  File Handling Demo");
    return 0;
}