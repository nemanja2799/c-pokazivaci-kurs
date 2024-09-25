#include<stdio.h>

int neighbour(int *arr, int size)
{
    int i;
    for (i=1;i<size-1;i++)
    {
        if (arr[i] == (arr[i-1] + arr[i+1]))
            return 1;
    }
    return 0;
}



int main()
{
    int grades[] = {1, 0, 2, 4, 5, 6};
    int result = neighbour(grades, 6);
    printf("%d\n", result);
    return 0;
}