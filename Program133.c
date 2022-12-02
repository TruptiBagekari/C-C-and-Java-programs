#include<stdio.h>
#include<stdbool.h>

int main()
{
    char Arr[30];

    printf("please enter your full name\n");
    //scanf("%s",Arr);

    scanf("%[^'\n']s",Arr);  // [^'\n] = re

    printf("your name is : %s\n",Arr);
    
    return 0;
}