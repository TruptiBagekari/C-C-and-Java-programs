#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src; // Brr(rikama) = Arr(String copied from)

        src++;
        dest++;
    }
    *dest = '\0'; // we can write *dest = *src; also
}

int main()
{
    char Arr[20]; // bharalela  *src
    char Brr[20];  // rikama    *dest

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr); // strcpyX(100,200)

    printf("Copied string is : %s\n",Brr);

    return 0;
}