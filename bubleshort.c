#include <stdio.h>

int main()
{
    int array[] = {0, 81, 56, 3, 44, 75, 68, 56, 890};
    int  arraysize = sizeof(array) / sizeof(array[0]);
    int i, j, size = arraysize;
    int swap;
    printf (" %d", arraysize); 
    for (i = 0; i < size - 1; i++)
    {
        swap = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
        {
            break;
        }
     }
     printf("\n After processing");
     for ( i = 0; i < size; i++){
        printf("\n %d", array[i]);
     }
     printf("\n");
     return 0;
}