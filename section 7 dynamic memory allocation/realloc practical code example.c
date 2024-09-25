#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i;
    int* grades = NULL;
    int* temp = NULL;
    int totalGrades;
    printf("Enter total grades:\n");
    scanf("%d", &totalGrades);
    grades = (int*)malloc(totalGrades * sizeof(int));
    //grades = calloc(totalgrades,sizeof(int));
    if(grades == NULL)
    {
        printf("Couldn't allocate memory!");
        return(1);
    }
    for(i=0; i<totalGrades; i++)
    {
        printf("Enter grade:");
        scanf("%d", &grades[i]);

    }
    totalGrades+=2;
    temp = (int*)realloc(grades,totalGrades*sizeof(int));
    if(temp != NULL)
    {
        grades = temp;
    }
    grades[totalGrades - 1] = 100;
    grades[totalGrades - 2] = 90;

    totalGrades-=3;
    temp = (int*)realloc(grades,totalGrades*sizeof(int));
    if(temp != NULL)
    {
        grades = temp;
    }
    free(grades);
    grades = NULL;
}