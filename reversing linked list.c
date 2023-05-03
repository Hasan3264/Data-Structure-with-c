#include <stdio.h>
#include <stdlib.h>
struct Node *createlinklist(int arr[], int size);
void recerselinkedlist(struct Node *head);

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
    struct Node *newhead = head;
    while (head != NULL)
    {
        printf("%d ->", head->data);
        head = head->next;
    }
    printf("NULL\n");

    recerselinkedlist(newhead);

    return 0;
}

void recerselinkedlist(struct Node *head)
{
    struct Node *prev = NULL, *current = head,
    *next = NULL;

    while(current !=NULL){
           next= current->next;
           current->next = prev;
           prev = current;
           current = next;
    }
    head = prev;
    while(head !=NULL){
           printf("%d ->", head->data);
           head = head->next;
    }
    printf("NUll \n");
}

    struct Node *
    createlinklist(int arr[], int size)
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
