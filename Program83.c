#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1;iCnt >= 0; iCnt--)
    {
        printf("%d",Arr[iCnt]);
    }
}

int main()
{

    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Entre the numbar of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof (int) * iLength);

    printf("entre the elements : \n");
    for(i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

     DisplayReverse(ptr,iLength);
    
    

    free(ptr);

    return 0;
}