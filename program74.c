#include<stdio.h>
#include<stdlib.h>   // memory management


void Demo(int Arr[], int iLength)
{
    // step 5 : perform the operation on array
}
int main()         // entry point function
{
    int iSize = 0;     // to store size of array
    int *ptr = NULL;   // to store address of array
    int iCnt = 0;      // loop counter

    // step 1 ; accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // step 2 : allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));


    // step3 : accept the value from user

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    printf("Elements of array are : \n");     // he teps mdhe nai 

     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // step : 4 pass the array to the function
    Demo(ptr,iSize);  //Demo(400,4)

    // step : 6 Dealloate the memory of array
    free(ptr);

    return 0;      // return success to os
}