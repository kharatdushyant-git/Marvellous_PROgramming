//STACK

#include<iostream>
using namespace std;

#pragma pck(1)


template <class luffy>
struct node 
{
    luffy data;
    struct node * next;
};


template <class luffy>
class Stack
{
    private :
        luffy iCount;
        struct node<luffy> * first;

    public : 
        Stack();

        void Push(luffy iNo);      // InsertFisrt()
        luffy Pop();               // DeleteFirst()
        luffy Peep();             // DeleteFisrt()
        void Display();
        int Count();
};



template <class luffy>
Stack<luffy> :: Stack()
{
    iCount = 0;
    first = NULL;
}


template <class luffy>
void Stack<luffy> :: Push(luffy iNo)
{
    struct node<luffy> * newn = NULL;

    newn = new struct node<luffy>();
    newn->data = iNo;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    this->iCount++;
}


template <class luffy>
luffy Stack<luffy> :: Pop()
{
    struct node<luffy> * temp = NULL;
    luffy iValue = 0;

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


template <class luffy>
luffy Stack<luffy> :: Peep()
{
    luffy iValue = 0;

    if(first == NULL)
    {
        cout<<"Stack is Empty\n";
        return -1;
    }
    else
    {
        iValue = first->data;
    
        return iValue;
    }
}


template <class luffy>
void Stack<luffy> :: Display()
{
    struct  node<luffy> * temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<" |\n";
        temp = temp->next;
    }
}


template <class luffy>
int Stack<luffy> :: Count()
{
    return this->iCount;
}

int main()
{
    Stack <int>sobj;

    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Stack Are : "<<iRet<<"\n";

    iRet = sobj.Pop();

    cout<<"Poped Element is : "<<iRet<<"\n";

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Stack Are : "<<iRet<<"\n";

    iRet = sobj.Peep();

    cout<<"Peeped Element is : "<<iRet<<"\n";

    sobj.Display();

    iRet = sobj.Count();

    cout<<"Elmenets of this Stack Are : "<<iRet<<"\n";

    return 0;
}