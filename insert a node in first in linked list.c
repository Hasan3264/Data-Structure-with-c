#include <stdio.h>
#include <stdlib.h>
struct Node *createlinklist(int arr[], int size);
void insertnode(struct Node *head, int data);
void printlist(struct Node *head);
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    struct Node *head = NULL;
    head = createlinklist(a, 5);
    printlist(head);
    insertnode(head, 6);
    return 0;
}
void insertnode(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp ->next = head;

    struct Node *newhead = temp;
    struct Node *current = newhead;
    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
void printlist(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
struct Node *createlinklist(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}
