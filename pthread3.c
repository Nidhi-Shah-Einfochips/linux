#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
pthread_t tid;
void *thr_fn(void *arg)
{
	pid_t pid;
	pthread_t tid;
	pid = getpid();
	tid=pthread_self();
	printf("pid %u tid %u \n",(unsigned int)pid,(unsigned int)tid);
	exit(0);
	return 0;
}
int main()
{
	int err;
	err=pthread_create(&tid,NULL,thr_fn,NULL);
	if(err!=0)
		printf("can't create thread : %d \n",strerror(err));
	while(1);
	pthread_join(tid,NULL);
	exit(0);
}
