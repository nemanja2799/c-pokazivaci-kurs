#include<stdio.h>
#include<stdlib.h>



int *adjustableReallocation(int* ActualSize) 
{
    int num, lastIndex = 0, size = 2;
    int* arr = NULL;
    int* temp = NULL;

    printf("Enter num:");
    scanf("%d", &num);

    if(num == -1)
    {
        *ActualSize = 0;
        return NULL;
    }
    else
    {
        temp = (int*)malloc(size*sizeof(int));
        if(temp == NULL)
            return NULL;
        arr = temp;
    }
    
    while(num!= -1)
    {
        if(lastIndex == size)
        {
            size++;
            //size*=2
            temp = (int*)realloc(arr, size*sizeof(int));
            if(temp==NULL)
                return NULL;
            arr = temp;
        }
        arr[lastIndex] = num;
        lastIndex++;
        printf("Enter num:");
        scanf("%d", &num);
    }
    *ActualSize = lastIndex;
    // temp = (int*)realloc(arr, size*sizeof(int));   ovaj zakomentarisani deo koda, kao i ona linija iznad sa size je za povecanje efikasnbosti koda
    // if(temp==NULL)
    //     return NULL;
    // arr = temp;
    return arr;
}

int main()
{
    int* array;
    int size;
    array = adjustableReallocation(&size);
    printf("%d", array[5]);


    return 0;
}