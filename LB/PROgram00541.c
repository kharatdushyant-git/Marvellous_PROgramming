#include<stdio.h>
void Display(int Arr[], int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        i++;
        Display(Arr,iSize);

        printf(" %d Elements is : %d\n",i,Arr[i]);     // invalid data cause i point to outside the memory
    }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;
}