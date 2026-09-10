#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first,PNODE last)
{
/*  My Logic  

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    temp1 = first;
    temp2 = last;

    while(temp1 != temp2)
    {
        printf("|%d|->",temp1->data);
        temp1 = temp1->next;
    }
 
    printf("|%d|",temp2->data);
    
    */

    while(first != last)
    {
        printf("|%d|->",first->data);
        first = first->next;
    }

    printf("|%d|",last->data);
}

int Count(PNODE first, PNODE last)
{
    return 0;
}

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first && NULL == *last)
    {
        *first = newn;
        *last = newn;                      
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

    (*last)->next = *first;
}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first && NULL == *last)
    {
        *first = newn;
        *last = newn;                      
    }
    else
    {
        (*last)->next = newn;
        *last = (*last)->next;
    }

    (*last)->next = *first;
}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    
}

void DeleteFirst(PPNODE first, PPNODE last)
{

}

void DeleteLast(PPNODE first, PPNODE last)
{
    
}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,151);

    Display(head,tail);


    return 0;
}