#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


pthread_t threads[3];


void * print(void * num){
        printf("Hello from thread %d\n",*(int *)num);
        printf("Terminating of thread %d\n", *(int *)num);
        pthread_exit(NULL);
}

int main(){

        for(int i = 0;i < 3;i++){
		int temp = i;
                printf("Creating thread %d\n", i);
                if(pthread_create(&threads[i], NULL, &print, &temp) != 0){
                        printf("Failed to create thread\n");
                }
		sleep(1);
        }
        pthread_exit(NULL);
}