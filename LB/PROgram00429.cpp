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
    
}

int SinglyLL :: Count()
{
    return this->iCout;
}

void SinglyLL :: InsertFirst(int iNo)
{
    
}

void SinglyLL :: InsertLast(int iNo)
{
    
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
    
    sobj.Display();

    return 0;
}