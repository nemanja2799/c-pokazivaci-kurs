#include <stdio.h>
#include <stdlib.h>
 
#define SIZE 5

 double findArrayAverage(int* arr, int size)
 {
    double  avgSoFar;
    if(size == 1)
    {
        return arr[0];
    }
    avgSoFar = findArrayAverage(arr + 1, size - 1);
    return (avgSoFar * (size - 1) + arr[0]) / size;

 }


 int main()
{
    int arr[SIZE] = {1,2,2,2,3};
    double AVG;
    AVG = findArrayAverage(arr,SIZE);
    printf("%lf", AVG);

}