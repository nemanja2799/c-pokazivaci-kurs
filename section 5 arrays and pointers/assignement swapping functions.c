#include<stdio.h>
#include<stdlib.h>

void swapInts(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}


void swapIntsNoThird1(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}


void swapIntsNoThird2(int *num1, int *num2)
{
    *num1 = *num1 * *num2;
    *num2 = *num1 / *num2;
    *num1 = *num1 / *num2;
}


void genericSwap(int *num1, int *num2,  int lenght)
{
    void* temp =malloc(lenght);

    memcpy(temp,num1, lenght);
    memcpy(num1, num2, lenght);
    memcpy(num2, temp, lenght);

}

int main()
{
    int a=2, b=5;
    //swapInts(&a, &b);
    //swapIntsNoThird1(&a,&b);
    //swapIntsNoThird2(&a,&b);
    genericSwap(&a,&b, sizeof(int));
    printf("a = %d, b = %d\n", a,b);
    return 0;
}
