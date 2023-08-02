#include<stdio.h>
#include<stdlib.h>


int SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

   
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      if(Arr[iCnt] == iNo)
      {
        break;
      }

    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
int  iRet = 0;
    int iValue = 0;


    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter number of elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    bRet = SearchFirstOccurance(ptr,iSize,iValue);

    if(bRet == -1)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("%d is occured at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;



}