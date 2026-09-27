#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

// Inorder (LDR)
void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n", first->data);
        Inorder(first->rchild);
    }
}

// Preorder (DLR)
void Preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n", first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

//Postorder (LRD)
void Postorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        Inorder(first->rchild);
        printf("%d\n",first->data);
    }   
}

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
        }
    }
}

int main()
{
    PNODE head = NULL;

    Insert(&head, 11);
    Insert(&head, 5);
    Insert(&head, 17);
    Insert(&head, 14);

    printf("Inorder Display:\n");
    Inorder(head);

    printf("Preorder Display:\n");
    Preorder(head);

    printf("Postorder Display:\n");
    Postorder(head);

    return 0;
}