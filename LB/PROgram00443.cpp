#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node *PNODE;

class Doublycl
{
    private:
        int iCount;
        PNODE first;
        PNODE last;

    public:
        Doublycl();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

Doublycl :: Doublycl()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

void Doublycl :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    PNODE temp = first;

    cout<<"<=> ";

    do
    {
        cout<<"|"<<temp->data<<"| <=> ";
        temp = temp->next;

    }   while(temp != first);

    cout<<"\n";
}

int Doublycl :: Count()
{
    return iCount;
}

void Doublycl :: InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

void Doublycl :: InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }

    first->prev = last;
    last->next = first;

    iCount++;
}

void Doublycl :: InsertAtPos(int iNo,int iPos)
{
    int NodeCnt = Count();

    if((iPos < 1) || (iPos > NodeCnt + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == NodeCnt + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        PNODE temp = first;

        for(int i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp->next;
        }

        // ---------------- YOUR LOGIC START ----------------

        // Wrong
        // newn->next = temp->next;
        // temp->next = newn;
        //
        // temp->next = newn;
        // newn->prev = temp;
        //
        // Mistake:
        // You forgot
        // newn->next->prev = newn;
        //
        // Because the next node still points to temp.

        // ---------------- CORRECT ----------------

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        first->prev = last;
        last->next = first;

        iCount++;
    }
}

void Doublycl :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)     // Better than first->next==NULL in Circular LL
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;

        delete first->prev;

        first->prev = last;
        last->next = first;
    }

    iCount--;
}

void Doublycl :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;

        delete last->next;

        first->prev = last;
        last->next = first;
    }

    iCount--;
}

void Doublycl :: DeleteAtPos(int iPos)
{
    int NodeCnt = Count();

    // ---------------- YOUR LOGIC ----------------

    // Wrong
    // if((iPos > 1)||(iPos < iCount))

    // This condition becomes true almost every time.

    // Correct

    if((iPos < 1)||(iPos > NodeCnt))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;

        for(int i = 1 ; i < iPos-1 ; i++)
        {
            temp = temp->next;
        }

        // ---------------- YOUR LOGIC ----------------

        // Wrong
        // temp->next = temp->next->next;
        // delete temp->next->prev;
        // temp->next->prev = temp;

        // After first line,
        // temp->next becomes the next node.
        // Then delete temp->next->prev deletes the node,
        // but you are accessing it again.

        // ---------------- CORRECT ----------------

        PNODE target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        delete target;

        first->prev = last;
        last->next = first;

        iCount++;
        iCount--;      // Net effect = only one decrement
    }

    iCount--;
}

int main()
{
    Doublycl dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.InsertLast(151);

    dobj.Display();
    cout<<"\n";

    dobj.DeleteFirst();
    dobj.Display();

    cout<<"Count : "<<dobj.Count()<<"\n";
    cout<<"\n";

    dobj.DeleteLast();
    dobj.Display();

    cout<<"Count : "<<dobj.Count()<<"\n";
    cout<<"\n";

    dobj.InsertAtPos(105,3);
    dobj.Display();

    cout<<"Count : "<<dobj.Count()<<"\n";
    cout<<"\n";

    dobj.DeleteAtPos(3);
    dobj.Display();

    cout<<"Count : "<<dobj.Count()<<"\n";
    cout<<"\n";

    return 0;
}