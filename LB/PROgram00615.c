# include<stdio.h>
# include<stdlib.h>

struct node 
{
    int data;
    struct node * next;
};

typedef struct node INODE;
typedef struct node * PINODE;
typedef struct node ** PPINODE;

#define MAXINODE 5

PINODE head = NULL;

void createDILB()
{

}

void Display()
{
    PINODE temp = head;

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }
}

int main()
{
    createDILB();

    Display();

    return 0;
}