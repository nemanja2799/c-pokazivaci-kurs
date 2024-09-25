#include<stdio.h>
#include<stdlib.h>

#define SIZE 4
int findIfKeyInArray(int *arr, int size, int key)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
 

int main()
{
    int grades[SIZE] = {80,85,72,90};
    int result;
    int key = 5;
    result = findIfKeyInArray(grades,SIZE, key);
    if(result)
    {
        printf("Element %d is in array", key);
    }
    else
    {
        printf("Element %d is not in array", key);
    }
    return 0;
}