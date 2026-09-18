//Queue

#include<iostream>
using namespace std;

#pragma pck(1)
struct node 
{
    int data;
    struct node * next;
};

class Queue
{
    private :
        int iCount;
        struct node * first;

    public : 
        Queue();

        void Enqueue(int iNo);      // InsertLast()
        int Dequeue();               // DeleteFirst()
    
        void Display();
        int Count();
};

Queue :: Queue()
{
    this->iCount = 0;
    this->first = NULL;
}

void Queue :: Enqueue(int iNo)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = new struct node();
    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    this->iCount++;
}

int Queue :: Dequeue()
{
    struct node * temp = NULL;
    int iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
        temp = first;
        first = first->next;
        delete temp;

        iCount--;
        return iValue;
    }

}

void Queue :: Display()
{
    struct  node * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<" |\n";
        temp = temp->next;
    }
}

int Queue :: Count()
{
    return this->iCount;
}

int main()
{
    Queue sobj;

    int iRet = 0;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Queue Are : "<<iRet<<"\n";

    iRet = sobj.Dequeue();

    cout<<"Removed Element from Queue is : "<<iRet<<"\n";

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Queue Are : "<<iRet<<"\n";

    return 0;
}