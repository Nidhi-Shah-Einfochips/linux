#include<pthread.h>
#include<stdio.h>
void *my(void *i)
{
	printf("\n I am in %d thread \n",(int *)i);
}
int main()
{
	pthread_t tid;
	struct sched_param param;
	int priority,policy,ret;
	ret=pthread_getschedparam(pthread_self(),&policy,&param);
	if(ret!=0)
	{
		perror("getschedparam");
	}
	printf("\n-----------------------main thread--------------\n policy: %d \t priority: : %d\n",policy,param.sched_priority);
	policy=SCHED_FIFO;
	param.sched_priority=3;
	ret = pthread_setschedparam(pthread_self(),policy,&param);
	if(ret!=0)
		perror("getschedparam\n");
	ret = pthread_getschedparam(pthread_self(),&policy,&param);
        if(ret!=0)
                perror("getschedparam\n");

	printf("\n-----------------------main thread--------------\n policy: %d \t priority: : %d\n",policy,param.sched_priority);
}
	
