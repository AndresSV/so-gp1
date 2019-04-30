#include <stdio.h>
#include <pthread.h>
#define NUM_PHILOSOHPERS 5
#define NUM_FORK 5

semaphore_t_forks[NUM_FORK];

void * life(void *td){
	long id = (long)td;
	while(1){
		//pensar
		if(id % 2 == 0){
			sem_wait(&forks[id]);
			sem_wait(&forks[(id + 1)%NUM_PHILOSOHPERS]);
		}
		else{
			sem_wait(&forks[(id + 1)%NUM_PHILOSOHPERS]);
			sem_wait(&forks[id]);
		}
		//comer
		sleep();
	}
}