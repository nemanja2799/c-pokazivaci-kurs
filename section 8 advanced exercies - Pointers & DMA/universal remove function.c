#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
void* removeElements(void* arr, unsigned size, unsigned inx, unsigned sourceSize)
{
     void* newArr = malloc(size-sourceSize);
     if(!newArr)
        return NULL;

    memcpy(newArr, arr, inx);
    memcpy((char*)newArr + inx, (char*)arr+inx+sourceSize, size-inx-sourceSize);

    return newArr;
}
void printArray(int *arr, int size)
 {
     int i = 0;
     for(i=0; i<size; i++)
     {
         printf("%d \t", arr[i]);
     }
     printf("\n");
 }


int main()
{
    int *arrayTest = NULL, *arrayInsertTest = NULL;
    arrayTest = (int *)malloc(5 * sizeof(int));
    for(int i = 0; i < 5; i++)
        arrayTest[i] = i;
    printArray(arrayTest, 5);
    arrayTest = (int*)removeElements((void *)arrayTest, 5*sizeof(int),2*sizeof(int),3*sizeof(int));
    printArray(arrayTest, 5-3);
    free(arrayTest);
    free(arrayInsertTest);

    return 0;
}



