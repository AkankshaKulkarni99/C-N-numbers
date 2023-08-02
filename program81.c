// basic 
#include<stdio.h>
#include<stdlib.h>

void Fun(int Arr[], int iLength)
{
    //logic                              //5
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements : \n");     //1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");             //2
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
    scanf("%d",&ptr[iCnt]); //consider ptr as a array
    }

    printf("Elements of the array are : \n");    //extra
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Fun(ptr,iSize);  // 3

    free(ptr);      //deallocate the memoy //6

    return 0;
}
