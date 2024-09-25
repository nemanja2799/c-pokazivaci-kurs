#include <stdio.h>
#include<stdlib.h>
#define SIZE 7

int findPairForSum(int *arr,int size, int target, int* ptr1, int* ptr2)
{
    int i,j;
    i=0;
    j=size-1;
    while(i!=j)
    {
        if((arr[i]+arr[j]) == target)
        {
            *ptr1 = i;
            *ptr2 = j;
            return 1;
        }
        else if (arr[i]+arr[j] < target)
        {
            i++;
        }
        else if (arr[i]+arr[j] > target)
        {
            j--;
        }
        
    }
    *ptr1 = 0;
    *ptr2 = 0;
    return 0;
}

int main()
{
    int arr[SIZE] = {1,3,4,7,9, 10, 12};
    int result;
    int firstIndex;
    int secondIndex;
    int targetValue = 5;
    result = findPairForSum(arr, SIZE, targetValue, &firstIndex, &secondIndex);
    printf("%d\n",result);
    printf("%d\t%d", firstIndex,secondIndex);
    return 0;
    
}