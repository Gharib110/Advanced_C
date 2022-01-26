#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>

void *hello_fun() {
    sleep(3);
    printf("Hello, %d\n", 12);
    pthread_exit(NULL);
    return NULL;
}

int main() {
    pthread_t th;
    pthread_create(&th, NULL, hello_fun, NULL);
    printf("Hello, %d\n", 10);

    sleep(2);

    pthread_join(th, NULL); // It is important to avoid exit
    pthread_exit(NULL);

    return 0;
}
