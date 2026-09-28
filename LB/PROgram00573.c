#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);         //0777 : all Permission

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File get's Successfully create with fd : %d\n",fd);
    }

    return 0;
}