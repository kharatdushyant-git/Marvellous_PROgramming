// 4
// 4 * 3 * 2 * 1 = 24

#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    static unsigned long int iFact = 1;
    
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
    unsigned long int iRet = 0;
    
    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %lu",iRet);

    return 0;
}