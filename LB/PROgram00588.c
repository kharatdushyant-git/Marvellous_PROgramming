#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>     // only linux based OS
#include<string.h> 

#define BUFFER_SIZE 100

int main()
{
    int fd = 0;
    int iRet = 0;

    char Data[BUFFER_SIZE] = {'\0'};

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        lseek(fd,5,0);

        iRet = read(fd,Data,10);

        printf("%d Bytes Gets Successfully read\n",iRet);

        printf("Data from file s : %s\n",Data);

        printf("----------------Second times lseek call----------------------\n");  
        
        memset(Data,'\0',sizeof(Data));

        lseek(fd,5,1);

        iRet = read(fd,Data,10);

        printf("%d Bytes Gets Successfully read\n",iRet);

        printf("Data from file s : %s\n",Data);

        close(fd);
    }

    return 0;
}