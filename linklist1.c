#include <stdio.h>
#include <conio.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
void main()
{
    // Initialising of node 1 data
    struct node node1;
    {
        node1.prev = NULL;
        node1.data = 600;
        node1.next = NULL;
    };
    // Initialising of node 2 data
    struct node node2;
    {
        node2.prev = NULL;
        node2.data = 800;
        node2.next = NULL;
    };
    // Initialising of node 3 data
    struct node node3;
    {
        node3.prev = NULL;
        node3.data = 900;
        node3.next = NULL;
    };
    // Forward Linking
    node1.next = &node2;
    node2.next = &node3;
    // Backward Linking
    node2.prev = &node1;
    node3.prev = &node2;

    // Acccessing memebers of node1, node2 and node3 through node1.
    printf("Value of node2 through node1 = %d \n", node1.next->data);
    printf("Value of node3 through node1 = %d \n", node1.next->next->data);
    printf("Value of node1 through node1 = %d \n", node1.data);

    // Acccessing memebers of node1, node2 and node3 through node2.
    printf("Value of node1 through node2 = %d \n", node2.prev->data);
    printf("Value of node2 through node2 = %d \n", node2.data);
    printf("Value of node3 through node2 = %d \n", node2.next->data);

    // Acccessing memebers of node1, node2 and node3 through node3.
    printf("Value of node1 through node3 = %d \n", node3.prev->prev->data);
    printf("Value of node2 through node3 = %d \n", node3.prev->data);
    printf("Value of node3 through node3 = %d \n", node3.data);

    getch();
}
