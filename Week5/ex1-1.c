#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

pthread_t id_thread[3];


void * print(void * num){
	printf("Hello from thread %d\n",*(int *)num);
	printf("Terminating of thread %d\n", *(int *)num);
	pthread_exit(NULL);
}

int main(){

	for(int i = 0;i < 3;i++){
		printf("Creating thread %d\n", i+1);
		if(pthread_create(&id_thread[i], NULL, &print, &i) != 0){
			printf("Failed to create thread\n");
		}
	}
	pthread_exit(NULL);
}
