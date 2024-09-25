#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void printValuesFrequency(int* arr, int size)
{
    int i,j;
    int leftFlag = 0;
    int countValue;
    for(i = 0; i < size; i++)
    {
       countValue = 1;
       for(j = 0; j<i; j++)
       {
            if(arr[i] == arr[j])
            {
                leftFlag = 1;
                break;
            }
       }
       if(leftFlag == 1)
       {
        continue;
       }
       else
       {
            for(j = i+1; j< size; j++)
            {
                if(arr[i] == arr[j])
                {
                    countValue++;
                }
            }
            printf("Value %d appears %d times.\n", arr[i], countValue);
       }
    }

}

int main()
{
    int arrayValue[SIZE] ={5,6,7,6,5}; 
    printValuesFrequency(arrayValue, SIZE);
    return 0;
}