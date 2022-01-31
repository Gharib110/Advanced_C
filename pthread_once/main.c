#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <malloc.h>

pthread_once_t once_control = PTHREAD_ONCE_INIT;
int comm_value = 0;

void* init_routine_t(void* param) {
	sleep(1);
	comm_value = 100;
	return NULL;
}

void* th1_func(void* param) {
	sleep(1);
	pthread_once(once_control, init_routine_t);
	if (status == 1) {
		printf("This thread called it %d\n", pthread_self());
	}
	return NULL;
}

void* th2_func(void* param) {
	sleep(2);
	int status = pthread_once(once_control, init_routine_t);
	if (status == 1) {
		printf("This thread called it %d\n", pthread_self());
	}
	return NULL;
}

int main(int argc, char **argv)
{
	pthread_t th1, th2;
	pthread_create(&th1, NULL, th1_func, NULL);
	pthread_create(&th2, NULL, th1_func, NULL);

	pthread_join(th1, NULL);
	pthread_join(th2, NULL);

	return 0;
}
