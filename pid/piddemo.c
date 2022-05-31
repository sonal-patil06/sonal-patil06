#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    pid_t pid;
    pid_t ppid;

    pid = getpid();
    printf("process ID pid: %d\n",pid);

    ppid = getpid();
    printf("process parent ID paid: %d\n",ppid);
    return 0;
}
