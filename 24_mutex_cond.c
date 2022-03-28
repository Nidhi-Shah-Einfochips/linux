#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int done = 1;
void* foo(void *arg)
{
	char *str = (char*)arg;
	pthread_mutex_lock(&lock);
	if(done == 1)
	{
		printf("waiting on condition variable cond1\n");
		pthread_cond_wait(&cond1,&lock);
	}
	else
	{
		printf("signaling condition variable\n");
		pthread_cond_signal(&cond1);
	}
	pthread_mutex_unlock(&lock);
	printf("returing thread \n");
	return NULL;
}
int main()
{
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,foo,"THdone");
	sleep(1);
	done =2;
	pthread_create(&tid2,NULL,foo,"THDtwo");
	pthread_join(tid2,NULL);
	return 0;
}
