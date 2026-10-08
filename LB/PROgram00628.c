#include<stdio.h>

int main()
{
    int iRet = 0;

    int i = 0, j = 0, k = 0;

    printf("Enter Three Number : \n");
    iRet = scanf("%d %d %d",&i,&j,&k);
    printf("Value of iRet : %d",iRet);

    return 0;
}