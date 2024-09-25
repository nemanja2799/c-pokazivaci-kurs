#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


void printBinary(int number)
{
    if(number/2 > 0)
    {
        printBinary(number/2);
        printf("%d", number%2);
    }
    else
    {
        printf("%d", number%2);
    }
}





int main()
{
    int n = 7;
    printBinary(n);
}