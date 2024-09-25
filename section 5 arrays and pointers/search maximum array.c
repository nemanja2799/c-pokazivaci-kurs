#include<stdio.h>


#define SIZE 4


int findMaxElement(int *arr, int size)
{
    if (size <= 0)
    {
        return -1;
    }
    int max=arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    return max;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    int maxGrade;
    maxGrade = findMaxElement(grades, SIZE);
    printf("Maximum element value in array is %d\n", maxGrade);

    return 0;
}