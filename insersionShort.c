#include <stdio.h>

int main()
{
    int array[] = {8, 21, 45, 54, 55, 26, 78,88,63};
    int arraysize = sizeof(array) / sizeof(array[0]);
    int i, value, hole, size = arraysize;

    for (i = 1; i < size; i++)            
    {
        value = array[i];
        hole = i;
        while(hole > 0 && array[hole-1] > value){
            array[hole] = array[hole - 1];
            hole--;
        }
        array[hole] = value;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}