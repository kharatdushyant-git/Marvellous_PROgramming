#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

# define BUFFER_SIZE 1024

void FileCopy(char FileNameSrc[], char FileNameDest[])
{

    char Buffer[BUFFER_SIZE] = {'\0'};

    int fdSrc = 0, fdDest = 0, iRet = 0;

    fdSrc = open(FileNameSrc,O_RDONLY);

    if(fdSrc == -1)
    {
        printf("Unable to open File\n");
        return;
    }

    fdDest = creat(FileNameDest,0777);

    if(fdDest == -1)
    {
        printf("Unable to create Destination File\n");
        return;
    }

    while((iRet = read(fdSrc,Buffer,sizeof(Buffer)))  != 0)
    {
        write(fdDest,Buffer,iRet);  
        memset(Buffer,'\0',sizeof(Buffer));  
    }

    close(fdSrc);
    close(fdDest);

}

int main()
{
    char FnameSrc[30] = {'\0'};
    char FnameDest[30] = {'\0'};

    int iRet = 0;

    printf("Enter the Source File Name : \n");
    scanf("%[^'\n']s",FnameSrc);

    printf("Enter the Destinastion File Name : \n");
    scanf(" %[^'\n']s",FnameDest);   

    FileCopy(FnameSrc,FnameDest);

    return 0;
}