#include <stdio.h>

int main()
{
int array[] = {0, 1, 2, 3, 4, 5, 6};
int item = 1;
int left, right, middle;
 left = 0;
 right = sizeof(array) / sizeof(array[0]);

 while (left <= right)
 {
     middle = (left + right) / 2;
    if(array[middle] == item){
        printf("fount %d ", item);
        return 0;
    }else if(array[middle] < item){
         left = middle + 1;
    }else{
        right = middle - 1;
    }
}

printf("NOT FOUND");
return 0;
}


