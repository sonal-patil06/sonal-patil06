#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (int argc , char const *argv[])
{
    pid_t id;
    printf("before fork\n");

    id = fork(); 
    if ( 0 == id)
    {
        printf("Child process ID:%d PPID:%d",getpid(),getppid());
    }
    else if (0 < id )
    {
        printf("Parent process ID:%d PPID:%d",getpid(),getppid());
    }
    else
    {
        perror("Fork failed\n");
    }
    return 0;
}