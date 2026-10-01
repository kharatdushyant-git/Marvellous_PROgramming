#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>

# define BUFFER_SIZE 1024

void DisplayFileInfromation(char FileName[])
{
    struct stat sobj;

    stat(FileName, &sobj);

    printf("File Name : %s\n",+FileName);
    printf("Inode Number : %llu\n",sobj.st_ino);
    printf("File Size : %d\n",sobj.st_size);
}

int main()
{
    char Fname[30] = {'\0'};

    int iRet = 0;

    printf("Enter the File Name : ");
    scanf("%[^'\n']s",Fname);

    DisplayFileInfromation(Fname);

    return 0;
}