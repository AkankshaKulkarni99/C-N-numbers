// accept n nunber from user and display odd count

#include<stdio.h>
#include<stdlib.h>                             // memory management


int OddCount(int Arr[], int iLength)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    if(( Arr[iCnt] % 2 ) != 0)
    {
        iCounter++;
    }
    return iCounter;


}
int main()         // entry point function
{
    int iSize = 0;     // to store size of array
    int *ptr = NULL;   // to store address of array
    int iCnt = 0;      // loop counter
    int iRet = 0;

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
    iRet = OddCount(ptr,iSize);

    printf("Odd elements : %d\n",iRet);

    // step : 6 Dealloate the memory of array
    free(ptr);

    return 0;      // return success to os
}