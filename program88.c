//accept one number from user and accept array from user and return first ocurance
// without flag
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
    int iValue = 0;  // element ghenya sathi
    int iRet = 0;
    

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

   iRet = SearchFirstOccurance(ptr,iSize,iValue);

   if(iRet == -1)
   {
    printf("There is no such element\n");
   }
   else
   {
    printf("%d occured at index %d\n",iValue,iRet);
   }
    free(ptr);      //deallocate the memoy //6

    return 0;
}