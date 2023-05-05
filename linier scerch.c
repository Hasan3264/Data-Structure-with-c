#include<stdio.h>
void finditem(int item);
int array[] = {0, 1, 2, 3, 4, 5, 6};
int main() {
  finditem(4);
  return 0;
}

void finditem(int item){
    int i = 0;
   while ( i  < sizeof(array)){
           if (array[i] == item){
               printf("found %d", item);
               break;
           }
           i++;
   }

   
}
