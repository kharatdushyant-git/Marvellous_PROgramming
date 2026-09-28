#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>     // only linux based OS
#include<string.h> 

int main()
{
    int fd = 0;
    int iRet = 0;

    char Data[100] = {'\0'};

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File get's Successfully opened with fd : %d\n",fd);

        iRet = read(fd,Data,13);
        // fd = kashyat lihaychay
        // "..." = kay lihaychay
        // 13 = kiti lihaychay

        printf("%d Bytes gets successfully read \n",iRet);

        printf("Data from files is : %s\n",Data);

        close(fd);
    }

    return 0;
}