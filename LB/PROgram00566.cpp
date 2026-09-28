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
};

Sreaching :: Sreaching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

void Sreaching :: Accept()
{
    int i = 0;

    cout<<"Enter the Elements : "<<"\n";

    for(i = 1; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

void Sreaching :: Display()
{
    int i = 0;

    cout<<"Elements of the Array are : "<<"\n";

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

    return 0;
}