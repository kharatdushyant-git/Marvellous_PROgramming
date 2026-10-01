#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
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
    struct stat sobj;

    stat(FileName, &sobj);

    return sobj.st_size;
}

int main()
{
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File Name : ");
    scanf("%[^'\n']s",Fname);

    Display(Fname);

    iRet = CalculateFileSize(Fname);

    printf("****************************************************************\n");
    printf("**********","Size of the File is : %d Bytes \n",iRet,"**********");
    printf("****************************************************************\n");

    return 0;
}
