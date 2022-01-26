#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>

void* print_message_delay(void* ptr) {
    char* msg;
    msg = (char*) ptr;
    sleep(2);
    printf("%s\n", msg);
    return NULL;
}

int main() {
    pthread_t th1;
    pthread_t th2;

    char* msg1 = "Thread_1";
    char* msg2 = "Thread_2";

    int th1_id = pthread_create(&th1, NULL, print_message_delay, (void*) msg1);
    int th2_id = pthread_create(&th2, NULL, print_message_delay, (void*) msg2);

    pthread_join(th1, NULL);
    pthread_join(th2, NULL);

    printf("Thread 1 : %d\n", th1_id);
    printf("Thread 2 : %d\n", th2_id);

    pthread_exit(NULL);

    return 0;
}
