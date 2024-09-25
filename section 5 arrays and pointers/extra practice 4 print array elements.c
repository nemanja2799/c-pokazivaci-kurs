#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void printLeftArray(int* arr, int size)
{
    if (size<1)
    {

    }
    else if(size == 1)
    {
        printf("%d", arr[0]);
    }
    else
    {
        printf("%d", arr[0]);
        printLeftArray(arr+1, size-1);
    }
}



void printRightArray(int* arr, int size)
{
    if(size==1)
    {
        printf("%d", arr[size-1]);
    }
    else if(size > 1)
    {
        printf("%d", arr[size-1]);
        printRightArray(arr, size -1);
    }

}

int main()
{
    int arr[SIZE] = {1,3,2,4,7};
    printLeftArray(arr, SIZE);
    printf("\n");
    printRightArray(arr, SIZE);
}