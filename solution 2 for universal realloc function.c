#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void* myRealloc(void*srcblock, unsigned oldsize, unsigned newsize);



int main()
{
    int* numbers =(int*)malloc(sizeof(int)*3);
    int* newNumbers = NULL;
    if(!numbers)
        return 1;
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;
    newNumbers = (int*)myRealloc(numbers, 3*sizeof(int),4*sizeof(int));
    numbers[3] =17;
    printf("%d", numbers[3]);


    return 0;
}


void* myRealloc(void*srcblock, unsigned oldsize, unsigned newsize)
{
    int smallSize;
    void* newArr = malloc(newsize);
    if(!newArr)
        return NULL;
    if(oldsize < newsize)
        smallSize = oldsize;
    else
        smallSize = newsize;
    memcpy(newArr, srcblock, smallSize);
    return newArr;
}