#include<stdio.h>

int main()
{
   int i = 0;

   printf(" \n");
   printf("ASCII Table\n");
   printf("  \n");

   printf("Character\t Decimal\t Hex \t Octal");

   for(i = 0; i <= 127; i++)
   {
    printf("%c \t %d \t %x \t %o\n",i,i,i,i);
   }

   printf("\n     \n");

    return 0;
}