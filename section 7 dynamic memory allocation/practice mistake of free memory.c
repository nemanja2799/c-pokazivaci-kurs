#include <stdio.h>
#include<stdlib.h>


int main()
{
    int *a;
    a = (int*)calloc(5,sizeof(int));
    free(a);
    free(a);
}