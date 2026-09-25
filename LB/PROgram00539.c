#include<stdio.h>
void Display(int Arr[], int iSize)
{
    int i = 0;

    i = 0;
    while(i < iSize)
    {
        printf(" %d Elements is : %d\n",i,Arr[i]);
        i++;
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;
}