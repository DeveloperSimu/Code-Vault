#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* copyList(struct Node *head)
{
    if (head == NULL)
        return NULL;

    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = head->data;
    newNode->next = copyList(head->next);

    return newNode;
}

void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *copy = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    copy = copyList(head);

    printf("Original List: ");
    printList(head);

    printf("Copied List: ");
    printList(copy);

    return 0;
}