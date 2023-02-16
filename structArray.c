#include <stdio.h>
#include <conio.h>
struct book
{
    int book_code;
    char author[20];
    char publisher[30];
    float price;
} b[3];
void main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter the details of book %d\n", i + 1);
        printf("Enter book code: ");
        scanf("%d", &b[i].book_code);
        printf("Enter Author name: ");
        scanf("%s", &b[i].author);
        printf("Enter Publisher name: ");
        scanf("%s", &b[i].publisher);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }
    for (i = 0; i < 3; i++)
    {
        printf("book code: %d\n", b[i].book_code);
        printf("Author name: %s\n", b[i].author);
        printf("Publisher name: %s\n", b[i].publisher);
        printf("price: %0.2f\n", b[i].price);
    }
    getch();
}
