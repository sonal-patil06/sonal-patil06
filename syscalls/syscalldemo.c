#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int fd;
    fd = open("desdlog.txt", O_CREAT | O_WRONLY);

    if(-1 == fd)
    {
        perror("Error in opening file...\n");\
        exit(EXIT_FAILURE);
    }

    write(fd ,"DESD\n",5);
    close(fd);
    return 0;

    exit(EXIT_SUCCESS);
}