#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    private :
        int iCout;
        PNODE first;
        PNODE last;

    public :
        SinglyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL :: SinglyLL()
{
    this->iCout = 0;
    this->first = NULL; 
    this->last = NULL; 
}

void SinglyLL :: Display()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do 
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;

    }   while(last->next != temp);

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
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;

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
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;

    iCout++;
}


void SinglyLL :: InsertAtPos(int iNo, int iPos)
{

}

void SinglyLL :: DeleteFirst()
{
    
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

    int iRet = 0;
    
    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    sobj.InsertLast(151);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Nodes are : "<<iRet<<"\n";

    return 0;
}