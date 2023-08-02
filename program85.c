// both function eka program mdhe
#include<stdio.h>
#include<stdlib.h>

void MinMax(int Arr[], int iLength)
{
    int iMin = Arr[0];
    int iMax = Arr[0];
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)  // time complexity N // not sorted N
    {
        if(Arr[iCnt] < iMin)         // logic
        {
            iMin = Arr[iCnt];
        }
    
    
        if(Arr[iCnt] > iMax)         // logic
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Largest element is : %d\n",iMax);
    printf("Smallest element is : %d\n",iMin);


    
                              
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
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
       scanf("%d",&ptr[iCnt]); //consider ptr as a array
    }

    printf("Elements of the array are : \n");    //extra
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    MinMax(ptr,iSize);  // 3
    

    free(ptr);      //deallocate the memoy //6

    return 0;
}