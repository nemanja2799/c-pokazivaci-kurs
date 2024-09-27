#include<stdio.h>
#include<stdlib.h>

#define SOURCE_ARRAY_SIZE 8
void printArray(int *arr, int size)
{
    int i = 0;
    for(i=0; i<size; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}

void generateOddEvenArrays(int *sourceArr, int SourceSize, int *SizeOdd, int *SizeEven,int **ArrOdd, int **ArrEven)
{
    
    int i = 0, j = 0, k = 0;
    for(i=0;i<SourceSize;i++)
    {
        if(sourceArr[i]%2 == 0)
        {
            (*SizeEven)++;
        }
        else
        {
            (*SizeOdd)++;
        }
    }
    *ArrOdd = (int *)malloc(*SizeEven * sizeof(int));
    *ArrEven = (int *)malloc(*SizeEven * sizeof(int));
    for(i=0;i<SourceSize;i++)
    {
        if(sourceArr[i]%2 ==0)
        {
            (*ArrEven)[j] = sourceArr[i];
            j++;
        }
        else
        {
            (*ArrOdd)[k] = sourceArr[i];
            k++;
        }
    }
    *SizeEven = j;
    *SizeOdd  = k;
}

int main()
{
    int originalArray[] = {12, 5, 7, 8, 3, 10, 4, 9};
    int size_ODD, size_EVEN;
    int *ODD = NULL;
    int *EVEN = NULL;
    printArray(originalArray,SOURCE_ARRAY_SIZE);
    generateOddEvenArrays(originalArray, SOURCE_ARRAY_SIZE, &size_ODD, &size_EVEN, &ODD, &EVEN);
    printArray(ODD, size_ODD);
    printArray(EVEN, size_EVEN);

    free(ODD);
    free(EVEN);
    return 0;
}