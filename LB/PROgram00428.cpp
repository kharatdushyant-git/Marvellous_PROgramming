#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
}

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private :
        int iCout;
        PNODE fisrt;
        PNODE last;

    public :
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFi();
        void InsertLast();
        void InsertAtPos(int iPos);
}

SinglyLL :: SinglyLL()
{
    this->iCout = 0;
    this->first = NULL; 
    this->last = NULL; 
}

void SinglyLL :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    do 
    {
        cout<<"|"<<this->first->data<<"|->";
        this->first = this->first->next;

    }   while(this->first != this->last);

    cout<<"\n";
}

int SinglyLL :: Count()
{
    return this->iCout;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first->next;
        this->first = newn;
    }

    this->last->next = this->first;

    iCout++;
}

void SinglyLL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        this->first = newn;
    }
    else
    {
        this->last->next = newn;
        newn->next = this->first;
    }

    this->last->next = this->first;

    iCout++;
}


void SinglyLL :: InsertAtPos(int iNo, int iPos)
{

}

void SinglyLL :: DeleteFirst()
{
    PNODE temp = NULL;

    if(this->first == NULL && this->last == NULL)
    {
        return;
    }
    else(first != last)
    {
        this->first = this->first->next;
        free(last->next);

        this->last->next = this->first;
    }

    iCout--;
}

void SinglyLL :: DeleteLast()
{

}

void SinglyLL :: DeleteAtPos(int iPos)
{

}

int main()
{
    SinglyLL sobj;

    InsertFirst(51);
    InsertFirst(21);
    InsertFirst(11);

    InsertLast(101);
    InsertLast(111);
    InsertLast(121);
    InsertLast(151);

    Display();

    return 0;
}