#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <signal.h>
#include <malloc.h>

struct Adapter {
    char* msg;
    int thread_id;
    int sum;
};

void* print_adapter(void* th_arg) {
    struct Adapter* data;
    data = (struct Adapter*) th_arg;
    printf("The actual Data is %s %d %d\n", data->msg, data->sum, data->thread_id);
    return NULL;
}

int main() {
    pthread_t th1;
	struct Adapter *data;
	data = malloc(sizeof(char) * 255 + sizeof(int) * 2);
	//data.msg = malloc(sizeof(char) * 255);
	data.msg = "Hello World !";
	data.sum = 999;
	data.thread_id = 2;
	
	pthread_t th1_id = pthread_create(&th1, NULL, print_adapter, (void*) data);
	printf("Thread %d was returned.\n", th1_id);
	
	pthread_join(th1, NULL);
	free(data);
	
	return 0;
}
