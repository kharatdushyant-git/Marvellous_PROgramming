#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

# define BUFFER_SIZE 1024

int main()
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0, iRet = 0;

    fd = open("PROgram00594.c",O_RDONLY);   // only give file name in "Marvellous.txt" if you want to hrad code it

    if(fd == -1)
    {
        printf("Unable to open File");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))  != 0)
    {
        write(1,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return 0;
}   