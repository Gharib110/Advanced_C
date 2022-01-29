#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>
#include <malloc.h>

struct Adapter {
	char* Name;
	int Age;
	int ID;
};
	

void* my_operator(void* th_arg) {
	struct Adapter* argument = (struct Adapter*) th_arg; 
	sleep(1);
	printf("Hello I am %s\n", argument->Name);
	printf("I am %d years old\n", argument->Age);
	printf("My ID is  %d\n", argument->ID);
	sleep(1);
	
	return (void*) argument->Name;
}

int main(int argc, char **argv)
{
	printf("hello world\n");
	pthread_t th1, th1_id;
	struct Adapter* data;
	data = malloc(sizeof(char)*255 + sizeof(int)*2);
	data->Name = "AlirezaGharib";
	data->Age = 12;
	data->ID = 34000;
	
	th1_id = pthread_create(&th1, NULL, my_operator, (void*) data);
	sleep(1);
	
	char* th1_result;
	pthread_join(th1, (void**) &th1_result);
	printf("The result is %s\n", th1_result);
	
	return 0;
}
