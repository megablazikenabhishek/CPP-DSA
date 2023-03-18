#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void display(struct node *head)
{
    struct node *ptr;

    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

void dll_delete_begin(struct node **head)
{
    struct node *ptr = NULL;
    if (*head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
        ptr = *head;
        *head = (*head)->next;
        free(ptr);
        ptr = NULL;
        (*head)->prev = NULL;
    }
    // return head;
}

int main()
{

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));
    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth;
    fourth = (struct node *)malloc(sizeof(struct node));

    head->next = second;
    head->data = 6;
    head->prev = NULL;

    second->next = third;
    second->data = 7;
    second->prev = head;

    third->next = fourth;
    third->data = 8;
    third->prev = second;

    fourth->next = NULL;
    fourth->data = 9;
    fourth->prev = third;

    printf("The original list is:\n");
    display(head);

    printf("\n");

    printf("The list after deleting first node:\n");
    dll_delete_begin(&head);
    display(head);

    return 0;
}