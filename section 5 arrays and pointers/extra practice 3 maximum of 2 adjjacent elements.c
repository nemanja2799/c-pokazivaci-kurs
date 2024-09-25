#include<stdio.h>
#include<stdlib.h>

#define SIZE 5


int maxAdjecentSum(int* arr, int size)
{
    int currentSum;
    int maxSumSoFar;
    if (size == 2)
        return arr[0] + arr[1];
    currentSum = arr[0] + arr[1];
    maxSumSoFar = maxAdjecentSum(arr+1, size-1);
    if(maxSumSoFar > currentSum)
        return maxSumSoFar;
    else
        return currentSum;
}



int main()
{
    int arr[SIZE] = {1,2,4,3,1};
    int result;
    result = maxAdjecentSum(arr, SIZE);
    printf("%d", result);
    return 0;
}