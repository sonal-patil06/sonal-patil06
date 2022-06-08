#include<stdio.h>
#include<pthread.h>

pthread_t tid;
pthread_attr_t attr;

void *display(void *data)
{
    printf("this is thread\n");
}

int main(int argc, char const *argv[])
{
    pthread_attr_init(&attr); // default attributes

    // set attributes - thread detach state
    pthread_attr_setdetachstate(&attr , PTHREAD_CREATE_DETACHED);

    printf("before thread creation\n");
    pthread_create(&tid, &attr, display, NULL);
    pthread_attr_destroy(&attr);
    printf("after thread creation\n");
    pthread_join(tid,NULL);
    return 0;
}