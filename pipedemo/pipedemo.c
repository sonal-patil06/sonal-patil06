#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define MAX_BUFF_SIZ 5
int main(int argc, char const *argv[] )
{
    unsigned char buff[MAX_BUFF_SIZ];
    pid_t id;
    int fd[2];
    //fd[0] is for reading
    //fd[1] is for writing

    pipe(fd);

    //two processes
    id = fork();

    if (id == 0)
    {
        //child process
        printf("child process\n");
        read(fd[0], buff, sizeof(buff));
        printf("child:recieved data:%s\n",buff);
    }
    else
    {
        //parent process
        printf("parent process\n");
        write(fd[1], "DESD\n",5);
        printf("parent: wrote data\n");
    }
    return 0;
}