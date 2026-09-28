#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>     // only linux based OS

int main()
{
    int fd = 0;
    int iRet = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File get's Successfully opened with fd : %d\n",fd);

        iRet = write(fd,"Jay Ganesh...\n",13);
        // fd = kashyat lihaychay
        // "...." = kay lihaychay
        // 13 = kiti lihaychay

        printf("%d Bytes gets successfully written \n",iRet);

        close(fd);
    }

    return 0;
}