#include<string.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

# define BUFFER_SIZE 1024

# define ERR_OPEN -1

int CountCapital(char *FileName)
{
    int iCount = 0;
    int i = 0;

    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0, iRet = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        return ERR_OPEN;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer)))  != 0)
    {
        for(i = 1; i <= iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return iCount;
}

int main()
{
    char Fname[30] = {'\0'};

    printf("Enter the File Name : ");
    scanf("%[^'\n']s",Fname);

    int iRet = CountCapital(Fname);

    if(iRet == ERR_OPEN)
    {
        printf("Unable to Open File");
    }
    else
    {
        printf("Number of CapitaL letter in file is : %d\n",iRet);
    }
    
    return 0;
}