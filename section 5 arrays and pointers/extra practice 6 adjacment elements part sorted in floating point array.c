#include <stdio.h>
#include <stdlib.h>
#define SIZE 5



int isSpecialFloatingSorted( double* arr, int size)
{
    int i;
    int leftElementInteger, rightElementInteger;
    double leftElementFractional,rightElementFractional;
    if (size == 1)
        return 1;
    leftElementInteger = (int)arr[0];
    rightElementInteger = (int)arr[1];
    leftElementFractional = arr[0] - leftElementInteger;
    rightElementFractional = arr[1] - rightElementInteger;
    if((leftElementInteger <= rightElementInteger) && (leftElementFractional >= rightElementFractional))
    {
        return isSpecialFloatingSorted(arr + 1, size-1);
    }
    else
    {
        return 0;
    }

}





int main()
{
    double arr[SIZE] = { 1.2, 5.1, 3.45, 4.42, 7.83};
    int result;
    result = isSpecialFloatingSorted(arr, SIZE);
    printf("%d", result);
}