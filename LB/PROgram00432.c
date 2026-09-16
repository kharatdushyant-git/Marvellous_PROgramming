#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
   int data;
   struct node * next;
   struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first, PNODE last)
{

}

int Count(PNODE first , PNODE last)
{
    return 0;
}

void InsertFisrt(PPNODE first, PPNODE last, int iNo)
{

}

void InsertLast(PPNODE first, PPNODE last, int iNo)
{

}

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{

}

void DeleteFisrt(PPNODE first, PPNODE last, int iNo)
{

}

void DeleteLast(PPNODE first, PPNODE last, int iNo)
{

}

void DeleteAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{

}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    return 0;
}