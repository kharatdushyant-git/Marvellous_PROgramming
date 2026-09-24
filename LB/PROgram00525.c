#include<stdio.h>

int Summation(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + iNo;
        // iNo--;
        Summation(iNo - 1);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summaiton is : %d",iRet);

    return 0;
}