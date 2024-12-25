#include <stdio.h>
#include <stdlib.h>
// Define the structure for a linked list node
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    // Creating the linked list
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want continue(0/1)? : ");
        scanf("%d", &choice);
    }

    // Display the linked list
    printf("Linked list: ");
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Inserting nodes at the ending
    choice = 1;
    printf("\nInserting nodes at the ending...\n");
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data u want to insert:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        temp = head;
        temp != 0;
        while (temp->next != 0)
        {
            temp = temp->next;
        }
        temp->next = newnode;

        printf("Do you want data insert(0/1)? : ");
        scanf("%d", &choice);
    }

    // Display the updated linked list
    printf("\nUpdated Linked list: ");
    temp = head;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
