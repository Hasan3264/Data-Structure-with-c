#include<stdio.h>
#include<stdlib.h>

struct  list{
    int data;
    struct list *next;
};

int main(){
    struct list *a = NULL;
    struct list *b = NULL;
    struct list *c = NULL;

    a = (struct list*) malloc(sizeof(struct list));
    b = (struct list*) malloc(sizeof(struct list));
    c = (struct list*) malloc(sizeof(struct list));

    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    while(  a != NULL){
        printf("%d ->", a->data);
        a = a->next;
    }
    return 0;
}
