#include<stdio.h>
#include<stdlib.h>
#define ORIGINAL_SIZE  11

int *createNoDuplexArray(int * sourceArray, int size, int *newSize)
{
    int i = 0;
    int j = 0;
    int count  = 1;
    int * newArray = NULL;
    for(i=0; i<size-1;i++)
        if(sourceArray[i] != sourceArray[i+1])
        {
            count++;
        }
    *newSize = count;
    newArray = (int*)malloc(count*sizeof(int));
    for(i=0; i < size - 1; i++)
    {
        if(sourceArray[i] != sourceArray[i+1])
        {
            newArray[j] = sourceArray[i];
            j++;
        }
    }
    newArray[j] =sourceArray[i];
    return newArray;
}

void printArray(int *Array, int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
    printf("%d \t", Array[i]);
    printf("\n");
}

int main()
{
    int originalArray[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};
    int noDuplexSize;
    int * noDuplexArray;
    printArray(originalArray, ORIGINAL_SIZE);
    noDuplexArray = createNoDuplexArray(originalArray, ORIGINAL_SIZE, &noDuplexSize);
    printArray(noDuplexArray,noDuplexSize);
    return 0;
}