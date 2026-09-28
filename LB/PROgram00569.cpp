#include<iostream>
using namespace std;

class Sreaching
{
    private :
        int *Arr;
        int iSize;

    public : 
        Sreaching(int iNo);    
        ~Sreaching();  
        void Accept();  
        void Display(); 
        bool LinerSerach(int iNo); 
        bool BiDirectionalSerach(int iNo); 
};

Sreaching :: Sreaching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

void Sreaching :: Accept()
{
    int i = 0

    cout<<"Enter the Elements : \n";

    for(i = 1; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

// time Complexity O( n)
bool Sreaching :: LinerSerach(int iNo);
{
    bool bFalg = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            bFalg = true;
            break;
        }
    }

    return bFalg;
    
}

// time Complexity O(> n/2)
bool Sreaching :: BiDirectionalSerach(int iNo);
{
    int iStart = 0;
    int iEnd = 0;
    bool bFalg = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd) 
    {
        if((iStart == iNo) || (iEnd == iNo))
        {
            bFalg = true;
            break;
        }

        iStart++;
        iEnd--;
    }

    return bFalg;
    
}

void Sreaching :: Display()
{
    int i = 0

    cout<<"Elements of the Array are : \n";

    for(i = 1; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

Sreaching :: ~Sreaching()
{
    delete []Arr;
}

int main()
{
    Sreaching sobj(5);

    sobj.Accept();
    sobj.Display();

    if(sobj.LinerSerach(int iNo) == true)
    {
        cout<<"Element is Found"<<"\n";
    }
    else
    {
        cout<<"Element is Not Found"<<"\n";
    }
    
    if(sobj.BiDirectionalSerach(int iNo) == true)
    {
        cout<<"Element is Found"<<"\n";
    }
    else
    {
        cout<<"Element is Not Found"<<"\n";
    }

    return 0;
}