#include <stdio.h>

void updateAverage(int a, int b, float *avg)
{
    *avg = (float)(a+b)/2;
}


int main()
{
    int a,b;
    float average;
    printf("Enter the value for variable 'a': ");
    scanf("%d", &a);
    printf("Enter the value for variable 'b': ");
    scanf("%d", &b);
    updateAverage(a,b,&average);
    printf("%.2f\n", average);
    return 0;
}