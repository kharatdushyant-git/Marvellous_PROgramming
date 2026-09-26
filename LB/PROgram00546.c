#include<stdio.h>

int strlenX(char *str)
{
    static int iCount = 0;

    if(*str  != '\0')
    {
        iCount++;
        str++;

        strlenX(str);
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("Length of String is : %d",iRet);

    return 0;
}