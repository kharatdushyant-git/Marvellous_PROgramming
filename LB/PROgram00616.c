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
    int i = 0;

    PINODE temp = head;
    PINODE newn = NULL;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        newn->data = i;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }
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