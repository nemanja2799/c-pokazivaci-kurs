#include <stdio.h>
#include<stdlib.h>
#define SIZE 5



int *createArray();

void printArr(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main()
{
    int *arr;
    arr = createArray();
    printArr(arr,SIZE);
    
}

int *createArray()
{
    int i;
    //int myArr[SIZE];
    int *myArr;
    myArr = (int*)malloc(SIZE*sizeof(int));
    if(!myArr)
    {
        printf("There is error in alocating memory!\n");
        exit(1);
    }
    printf("Enter %d elements to your array.\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        printf("Enter numbe`r %d:", i);
        scanf("%d",&myArr[i]);
    }
    return myArr;
}