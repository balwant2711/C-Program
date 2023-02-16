#include <stdio.h>
#include <conio.h>
void main()
{

    /* SWITCH Syntax------

         switch (number)
         {
         case 1 ://Dosomething
             break;
         case 2 : //Dosomething

             break;

         default: //Dosomething
             break;


         }

     */
    int day;
    printf("Enter Day");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("MONDAY \n");
        /* code */
        break;
    case 2:
        printf("TUESDAY \n");
        /* code */
        break;
    case 3:
        printf("WEDNESDAY \n");
        /* code */
        break;
    case 4:
        printf("THURSDAY \n");
        /* code */
        break;
    case 5:
        printf("FRIDAY \n");
        /* code */
        break;
    case 6:
        printf("SATURDAY \n");
        /* code */
        break;
    case 7:
        printf("SUNDAY \n");
        /* code */
        break;

    default:
        printf("Not a valid day");
        break;
    }
    getch();
}