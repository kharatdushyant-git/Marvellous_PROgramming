#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File get's Successfully opened with fd : %d\n",fd);
    }

    return 0;
}