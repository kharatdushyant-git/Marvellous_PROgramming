// 5678
// 8 + 7 + 6 + 5 = 26

#include<stdio.h>

int Summation(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        Summation(iNo / 10);
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("Summaiton of digits is : %d",iRet);

    return 0;
}