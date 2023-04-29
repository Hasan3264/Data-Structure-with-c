#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5

int OurQueue[CAPACITY];
int front = 0, rear = -1; totalItem = 0;

bool isFull(){
    if (totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}
bool isempty(){
    if (totalItem == 0)
    {
        return true;
    }
    return false;
}

void enqueue(int item){
    if (isFull())
    {
        printf("Queue is full \n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    OurQueue[rear] = item;
    totalItem++;
}
int dequeue(){
    if (isempty())
    {
        printf("Queue is Empty \n");
        return -1;
    }
    int frontItem = OurQueue[front];
    OurQueue[front] = -1;
    front = (front + 1) % CAPACITY;
    totalItem--;   
}

void printQueue(){
    int i;
    printf("Queue:");
    for(i=0; i<CAPACITY; i++){
        printf("%d ", OurQueue[i]);
    }
    printf("\n");
}

int main(){
    printf("implementation of queue: \n \n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    printQueue();
    dequeue();
    printQueue();
    enqueue(50);
    printQueue();
    return 0;
}