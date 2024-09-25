#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int secondSmallest(int* arr, int size)
{
    int i;
    int smallest  = arr[0];
    int seccondsmallest = arr[0];
    for(i = 1; i < size; i++)
    {
        if(smallest > arr[i])
        {
            seccondsmallest = smallest;
            smallest = arr[i];
            
        }
        else if(seccondsmallest>arr[i])
        {
            seccondsmallest = arr[i];
        }
        else if( smallest == seccondsmallest)
        {
            seccondsmallest = arr[i];
        }
    }
    return seccondsmallest;
}

int main()
{
    int arr[SIZE] = {1,8,2,3,14};
    int target;
    target = secondSmallest(arr, SIZE);
    printf("%d", target);
    return 0 ;
}