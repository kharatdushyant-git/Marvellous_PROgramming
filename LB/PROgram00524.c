// 4
// 4 + 3 + 2 + 1 = 0

#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;
    
    while(iNo != 0)
    {
        iSum = iSum + iNo;
        iNo --;
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