// basic program memory allocation and deallocation

#include<stdio.h>
#include<stdlib.h>   // for malloc memory // dynamic memory  // standard library

int main()
{
    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");  // he apn wichrtoy  // step1
    scanf("%d",&iSize);                          // tyan dileli value isize mdhe store hoil

    ptr = (int *)malloc(iSize * sizeof(int));         // imp mmory aalocate //step 2

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");          // step
        return -1;
    }

    printf("Memory allocated successfully...\n");



    return 0;
}