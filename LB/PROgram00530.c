// 4
// 4 * 3 * 2 * 1 = 24
// itreative

#include<stdio.h>
typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    ULONG iFact = 1;
    
    while(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
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