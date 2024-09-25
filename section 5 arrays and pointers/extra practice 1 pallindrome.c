#include <stdio.h>
#include<stdlib.h>
#define SIZE 7

int isPalindrome(int* arr, int size)
{
    int result;
    if(size<=1)
    {
        result = 1;
        return result;
    }
    if(arr[0] == arr[size-1])
    {
        return isPalindrome(arr+1, size-2);
    }
    else
    {
        result = 0;
        return result;
    }
    
    
}

int main()
{
    int arr[SIZE] = {1,1,4,7,4,1,1};
    int result;
    result = isPalindrome(arr, SIZE);
    printf("%d", result);
    return 0;
    
}