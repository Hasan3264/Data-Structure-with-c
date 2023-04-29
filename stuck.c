#include<stdio.h>
#define CAPACITY 5
int stuck[CAPACITY];
int top = -1;

void push(int x){
     if(top < CAPACITY- 1){
         top = top + 1;
         stuck[top] = x;
         printf("SucceccFully Added Item: %d\n", x);
     }else{
        printf("Exception From Push: NO Space Available \n");
     }
}
int pop(){
     if (top >= 0)
     {
        int val = stuck[top];
        top = top - 1;
        printf ("Poped Item: %d\n", val);
     }
     printf("Exception From Pop! Empty Stack!\n");
     return 0;
}
int peek(){
    if (top >= 0){
          return stuck[top];
    }
    printf ("Exception From Peek! Empty Stack!\n");
    return 0;
}
int main(){
    printf("Implementing My Stuck in c \n");
    peek();
    push(40);
    push(20);
    push(70);
    push(90);
    push(80);
    pop();
    push(20);
    printf("Top oF Stuck:  %d\n",peek());
    return 0;
}