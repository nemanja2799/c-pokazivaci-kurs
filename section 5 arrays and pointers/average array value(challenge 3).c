#include <stdio.h>
#include<stdlib.h>

#define SIZE 4


int sumArray(int *arr, int size)
{
    int i, sum =0;
    for(i=0;i<size;i++)
        sum= sum + arr[i];
    return sum;
}

double averageArrayValue(int *arr, int size)
{
    double average = 0;
    int sumValue = 0;
    sumValue = sumArray(arr, size);
    average  = sumValue / size;
    return average;
}

int main()
{
    int grades[SIZE] = {80,85,72,90};
    double average;
    average = averageArrayValue(grades, SIZE);
    printf("Average  value of array elements is: %f\n", average);
    return 0;
}