#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Doublycl
{
    private : 
        int iCount;
        PNODE first;
        PNODE last;

    public :
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
    this->iCount = 0;
    this->first = NULL;
    this->last = NULL;
}

void Doublycl :: Display()
{

} 

int Doublycl :: Count()
{
    return 0;
}

void Doublycl :: InsertFirst(int iNo)
{

}

void Doublycl :: InsertLast(int iNo)
{
    
}

void Doublycl :: InsertAtPos(int iNo, int iPos)
{
    
}

void Doublycl :: DeleteFirst()
{

}

void Doublycl :: DeleteLast()
{
    
}

void Doublycl :: DeleteAtPos(int iPos)
{
    
}

int main()
{
    Doublycl dobj;

    cout<<sizeof(dobj);

    return 0;
}