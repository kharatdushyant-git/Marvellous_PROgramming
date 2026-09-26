#include<stdio.h>
void Display(int Arr[], int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        printf(" %d Elements is : %d\n",i,Arr[i]);
        i++;
        Display(Arr,iSize);
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;
}