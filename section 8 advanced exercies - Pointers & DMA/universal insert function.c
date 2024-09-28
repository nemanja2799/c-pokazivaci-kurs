#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 void* insert(void* arr, unsigned size, unsigned inx, void* source, unsigned sourceSize)
{
     void* newArr = malloc(size + sourceSize);
     if(!newArr)
         return NULL;
     memcpy(newArr, arr, inx);
     memcpy((char*)newArr+inx, source, sourceSize);
     memcpy((char*)newArr + inx + sourceSize, (char*)arr+inx ,size- inx);
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
     arrayInsertTest = (int *)malloc(3*sizeof(int));
     for(int i = 0; i < 5; i++)
         arrayTest[i] = i;
     for(int i = 0; i < 3; i++)
         arrayInsertTest[i] = i+8;
     printArray(arrayTest, 5);
     printArray(arrayInsertTest, 3);
     arrayTest = insert(arrayTest, 5*sizeof(int), 2*sizeof(int), arrayInsertTest, 3*sizeof(int));
     printArray(arrayTest, 8);
     free(arrayTest);
     free(arrayInsertTest);
     return 0;
}