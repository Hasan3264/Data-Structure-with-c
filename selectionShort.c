#include<stdio.h>


int main(){
    int array[] = {0, 21, -245, 54, 55, 26, 78};
    int arraysize = sizeof(array) / sizeof(array[0]);
    int i, j, minimum_index, size = arraysize;

    for (i = 0; i < size; i++)
    {
         minimum_index = i;
         for (j = i + 1; j < size; j++)
         {
             if (array[j] < array[minimum_index])
             {
                 minimum_index = j;
             }
         }

         int temp = array[i];
         array[i] = array[minimum_index];
         array[minimum_index] = temp;
    }
    for (i = 0; i < size; i++)
    {
         printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}