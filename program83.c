// accept number from user and we havr to findout the largesh numner from that number
#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iCnt = 0;

    for(iCnt < 0; iCnt < iLength; iCnt++)  // time complexity N // not sorted N
    {
        if(Arr[iCnt] < iMin)         // logic
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
                              
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");     //1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");             //2
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
    scanf("%d",&ptr[iCnt]); //consider ptr as a array
    }

    printf("Elements of the array are : \n");    //extra
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Min(ptr,iSize);  // 3
    printf("Smallest element is : %d\n",iRet);

    free(ptr);      //deallocate the memoy //6

    return 0;
}