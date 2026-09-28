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
};

Sreaching :: Sreaching(int iNo)
{
    iSize = iNo;
    Arr = new int[iSize];
}

Sreaching :: ~Sreaching()
{
    delete []Arr;
}

int main()
{
    return 0;
}