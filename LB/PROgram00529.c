// 4
// 4 * 3 * 2 * 1 = 24
// Recursive

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    static ULONG iFact = 1;
    
    if(iNo > 0)
    {
        iFact = iFact * iNo;
        Factorial(iNo - 1);
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;
    
    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lu",iRet);

    return 0;
}