#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc,char const*argv[])
{
    pid_t id;

    printf("Before fork\n"); 

    id = fork();

    if(0==id)
    {
        printf("Child Process id :%d PPID: %d\n",getpid(),getppid()); 
    }
    else if(0 < id)
    {
        printf("Parent Process id :%d PPID: %d\n",getpid(),getppid());
        sleep(10);
        printf("Parent process completed"); 
    }
    else 
    {
        perror("Fork failed\n");
    }
    return 0;
}