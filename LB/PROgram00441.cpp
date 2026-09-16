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

};

int main()
{
    Doublycl dobj;

    cout<<sizeof(dobj);

    return 0;
}