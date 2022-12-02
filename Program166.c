#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // Step 1 :Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // initialise the node
    newn->data = No;
    newn->next = NULL;

    //check linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else  //if linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
        printf("elements of linked list are : \n");
        while(First != NULL)
        {
            printf("| %d | ->\t",First->data);
            First = First->next;
        }

        printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

   return 0;
}    



/*

Void InsertFirst(PPNODE First, int iNo)          |
Void InsertLAst(PPNODE First, int iNo)           |  call by address
Void InsertAtPos(PPNODE First,int iNo, int Pos)  |

Void DeleteFirst(PPNODE First) |
Void DeleteLAst(PPNODE First)  | call by address
Void DeleteAtPos(PPNODE First, int Pos) | 

Void Display(PNODE First) |   call by value
int Count(PNODE First)    |  call by value

*////////////////////////////////////////////////////
/*  int main function call

InsertFirst(&Head,11)
InsertLast(&Head,11)
InsertAtPos(&Head,11,5) 5 is position ahe

DeleteFirst(&Head)
DeleteLast(&Head)
DeleteAtPos(&Head,5)

Display(Head)
Count(Head)



*/