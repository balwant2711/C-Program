#include <stdio.h>
#include <conio.h>
int main()
{
    /* Conditional operator /
       Ternary operator
        Condition ? doSomething if TRUE : doSomething if FALSE;
        */

    //    4 <= 5 ? printf("True\n") : printf("False");

    int name, dob;
    long mob;
    printf("Enter your name ");
    scanf("%d", &name);
    printf("\nEnter Dob ");
    scanf("%d", &dob);
    printf("\nEnter  mob ");
    scanf("%ld", &mob);

    // printf("Name  : %d\n",name);
    // printf("Dob   : %d\n",dob);
    // printf("Mob   : %ld\n",mob);

    return 0;
}
