#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

void inputArray(int *arr, int size)
{
    int i;
    for(i=0; i<size;i++)
    {
        printf("Enter value #%d:", i+1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size)
{
    int i;
    for(i=0; i<size;i++)
    {
        printf("%d\t", arr[i]);
    }
}


int main()
{
    int grades[SIZE];
    inputArray(grades,SIZE);
    displayArray(grades,SIZE);

    return 0;
}