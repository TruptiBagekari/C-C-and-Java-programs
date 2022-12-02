#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iMin = Arr[0], iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{

    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Entre the numbar of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof (int) * iLength);

    printf("entre the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    iRet = Minimum(ptr,iLength);
    
    printf("Minimum number is : %d\n",iRet );

    free(ptr);

    return 0;
}