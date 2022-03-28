#include<stdio.h>
#include<pthread.h>
void *printhello(void *threadid)
{
	printf("\nhello world \n");
	while(1);
}
int main()
{
	pthread_t thread;
	int rc,t=0;
	printf("creating thread..");
	rc=pthread_create(&thread,NULL,printhello,NULL);
	printf("\n thread id %u ",thread);
	sleep(6);
	t=pthread_cancel(thread);
	if(t==0)
		printf("\n cancelled thread\n");
	printf("\n thread id %u \n",thread);
}
