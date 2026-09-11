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
        int iCount;
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
    this->iCount = 0;
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
    return this->iCount;
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

    iCount++;
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

    iCount++;
}


void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCount = 0;
    iCount = Count();

    int i = 0;
    
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        last->next = first;
    }

    iCount++;

}

void SinglyLL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return ;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
    }

    last->next = first;

    iCount--;
}

void SinglyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL && last == NULL)
    {
        return ;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete last;
        last = temp;

    }

    last->next = first;

    iCount--;

}

void SinglyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;

    int iCount = 0;
    iCount = Count();

    int i = 0;
    
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {

        temp = first;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;

        last->next = first;
    }

    iCount--;

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

    sobj.DeleteFirst();

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Nodes are : "<<iRet<<"\n";

    sobj.DeleteLast();

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Nodes are : "<<iRet<<"\n";

    sobj.InsertAtPos(105,4);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Nodes are : "<<iRet<<"\n";

    sobj.DeleteAtPos(4);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Number of Nodes are : "<<iRet<<"\n";

    return 0;
}