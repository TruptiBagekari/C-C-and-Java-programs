#include<stdio.h>
#include<stdbool.h>

bool IsCapital(char ch)
{
   if ((ch >= 'A') && (ch <= 'Z'))
   {
    return true;
   }
   else
   {
    return false;
   }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Plz entre one character\n");
    scanf("%c",&cValue);

    bRet = IsCapital(cValue);
    if(bRet == true)
    {
        printf("%c is a Capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a Capital case letter\n",cValue);
    }

    return 0;
}