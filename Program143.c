
#include<stdio.h>
int CountFrequency(char *str, char ch)
{

    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Plz entre string\n");
    scanf("%[^'\n']s",Arr);

    printf("plz enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of  letters is : %d\n",iRet);

    return 0;
}