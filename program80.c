// accept n nunber from user and display average 

#include<stdio.h>
#include<stdlib.h>                             // memory management


float Average(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/ (float)iLength);


}
int main()         // entry point function
{
    int iSize = 0;     // to store size of array
    int *ptr = NULL;   // to store address of array
    int iCnt = 0;  
    float fRet = 0;    // loop counter

    // step 1 ; accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // step 2 : allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));


    // step3 : accept the value from user

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]); // consider ptr asa a array
    }


    printf("Elements of array are : \n");     // he teps mdhe nai 

     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // step : 4 pass the array to the function
    fRet = Average(ptr,iSize);

    printf("Average is : %f\n",fRet);

    // step : 6 Dealloate the memory of array
    free(ptr);

    return 0;      // return success to os
}