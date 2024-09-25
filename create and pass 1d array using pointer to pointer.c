#include<stdio.h>
#include<stdlib.h>



void create1DArray(int arrSize, int** p) 
{
    int* newArr;
    int i;
    newArr = (int*)malloc(arrSize*sizeof(int));
    for(i=0; i<arrSize; i++)
    {
        printf("Enter value:");
        scanf("%d", &newArr[i]);
    }
    *p = newArr;
} 

int main()
{
    int size;
    int* ptr;
    printf("Enter the desired size of the array:");
    scanf("%d", &size);
    create1DArray(size, &ptr);

    return 0;
}