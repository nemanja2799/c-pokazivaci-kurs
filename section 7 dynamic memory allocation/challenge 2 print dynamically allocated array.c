#include <stdio.h>
#include<stdlib.h>


void printArray(int * arr, int size)
{
    int i=0;
    for(i=0; i<size; i++)
        printf("%d\t ",arr[i]);
    printf("\n");
}

int main()
{
    int *grades;
    int arraySize;
    int i;
    printf("Enter the number of grades that you have:");
    scanf("%d",&arraySize);
    grades = (int*)malloc(arraySize*sizeof(int));
    for(i=0;i<arraySize;i++)
    {
        printf("Enter grades of index %d:", i);
        scanf("%d",&grades[i]);
    }
    printf("\n");
    printArray(grades,arraySize);

    return 0;
}