#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

# define BUFFER_SIZE 1024

void Display(char *FileName)
{

    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0, iRet = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File");
        return;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))  != 0)
    {
        write(1,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }

    printf("\n");

    close(fd);
}

int CalculateFileSize(char FileName[])
{

    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0, iRet = 0,iSize = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open File");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))  != 0)
    {
        iSize = iSize + iRet;
    }

    close(fd);

    return iSize;
}

int main()
{
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File Name : ");
    scanf("%[^'\n']s",Fname);

    Display(Fname);

    iRet = CalculateFileSize(Fname);

    printf("Size of the File is : %d Bytes \n",iRet);

    return 0;
}