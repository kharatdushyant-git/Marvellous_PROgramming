//STACK

#include<iostream>
using namespace std;

#pragma pck(1)
struct node 
{
    int data;
    struct node * next;
};

class Stack
{
    private :
        int iCount;
        struct node * first;

    public : 
        Stack();

        void Push(int iNo);      // InsertFisrt()
        int Pop();               // DeleteFirst()
        int Peep();             // DeleteFisrt()
        void Display();
        int Count();
};

Stack :: Stack()
{
    this->iCount = 0;
    this->first = NULL;
}

void Stack :: Push(int iNo)
{
    struct node * newn = NULL;

    newn = new struct node();
    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    this->iCount++;
}

int Stack :: Pop()
{
    return 0;
}

int Stack :: Peep()
{
    return 0;
}

void Stack :: Display()
{
    struct  node * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Stack :: Count()
{
    return this->iCount;
}

int main()
{
    Stack sobj;

    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Stack Are : "<<iRet<<"\n";

    return 0;
}