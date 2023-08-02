//accept one number from user and as wel as accept another number check whether number present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    if(Arr[iCnt]== iNo)
    {
        bFlag = true;
        break;
    }

    return bFlag;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;  // element ghenya sathi
    bool bRet = false;

    printf("Enter the number of elements : \n");     //1
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");             //2
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
    scanf("%d",&ptr[iCnt]); //consider ptr as a array
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);

    printf("Elements of the array are : \n");    //extra
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    
    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the array\n",iValue);
    }
    else
    {
       printf("%d is not present in the array\n",iValue);  
    }

    free(ptr);      //deallocate the memoy //6

    return 0;
}