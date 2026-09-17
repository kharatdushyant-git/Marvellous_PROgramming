#include<iostream>
using namespace std;

template <class X, class Y>

void Fun(X no1, Y no2)
{
    cout<<"Inside Fun\n";
}


int main()
{
    Fun(11,'A');

    Fun(11.90,21);

    return 0;
}