#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <malloc.h>

void* my_operator(void* th_arg) {
	pthread_detach(pthread_self());
	printf("This is our current thread %d\n", pthread_self());
	sleep(2);
	printf("the message is : %s\n", (char*) th_arg);
	return NULL;
}

int main(int argc, char **argv)
{
	pthread_t th1;
	char* msg = "This is a TEST.";
	pthread_create(&th1, NULL, my_operator, (void*) msg);
	printf("hello thread %d\n", pthread_self());
	pthread_exit(NULL);
	return 0;
}
