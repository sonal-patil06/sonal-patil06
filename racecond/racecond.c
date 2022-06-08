#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int count = 0;

void *incthread(void *arg)
{
    while(1)
    {
        printf("inc thread: %d\n", count);
        count++;
    }
}
void *decthread(void *arg)
{
    while(1)
    {
        printf("dec thread: %d\n", count);
        count++;
    }    
}
int main(int argc, char const *argv[])
{
    pthread_t inc,dec;
    pthread_create(&inc, NULL, incthread, NULL);
    pthread_create(&inc, NULL, incthread, NULL);
    pthread_join(inc, NULL);
    pthread_join(dec, NULL);
    
    return 0;
}

