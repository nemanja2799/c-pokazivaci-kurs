#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


void swap(int *val1, int * val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

void swapArrayON(int *arr1, int *arr2, int size)
{
    int i = 0;
    for(i=0;i<size;i++)
    {
        swap(&arr1[i], &arr2[i]);
    }

}

int main()
{
    int Array1[SIZE] = {1,3,6,8,10};
    int Array2[SIZE] = {2,2,4,11,17};
    swapArrayON(Array1, Array2, SIZE);
    return 0;
}