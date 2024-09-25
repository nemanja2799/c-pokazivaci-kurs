#include<stdio.h>
#include<stdlib.h>

int checkSortedDecending(int *arr, int size, int * checker)
{
    int i;
    for(i=0; i<size-1; i++)
    {
        if(arr[i]> arr[i+1])
        {
            return 0;
        }
        if (arr[i]== arr[i+1])
        {
            if(checker!= 0)
                *checker = 0;
        }
    }
    return 1;
}




int main()
{
    int equalCheck = 1;
    int decendingCheck = 1;
    int valuesArr[] = {1, 1, 0};
    decendingCheck  = checkSortedDecending(valuesArr, 3, &equalCheck);
    if(decendingCheck && equalCheck)
    {
        printf("Realy Sorted");
    }
    else if(decendingCheck && !(equalCheck))
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}