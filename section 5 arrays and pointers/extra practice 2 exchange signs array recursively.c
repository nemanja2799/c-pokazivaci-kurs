#include<stdio.h>
#include<stdlib.h>

#define SIZE 3


int checkArray(int* arr, int size)
{
    if (size >1)
    {
        if((arr[0] * arr[1]) > 0)
        {
            return 0;
        }
        else
        {
            return checkArray(arr+1, size-1);
        }
    }
    else
    {
        return 1;
    }
}



int main()
{
    int arr[SIZE] = {0, -5, 4};
    int result;
    result = checkArray(arr, SIZE);
    printf("%d", result);
    return 0;
}