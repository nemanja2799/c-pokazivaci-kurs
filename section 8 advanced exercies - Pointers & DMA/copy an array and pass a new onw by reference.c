#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
void createNewArrayByReference(void* arr, unsigned size, void**newArr)
{
     *newArr = malloc(size*sizeof(int));
     memcpy(*newArr, arr, size);
    
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
    createNewArrayByReference((void *)arrayTest, 5*sizeof(int), &arrayInsertTest);
    printArray(arrayInsertTest, 5);
    free(arrayTest);
    free(arrayInsertTest);

    return 0;
}



