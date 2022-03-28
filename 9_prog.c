#include<stdio.h>
#include<pthread.h>
pthread_t tid1,tid2;
void *thread1(void  *arg)
{
	printf("calling thread 1\n");
	return NULL;
}
void *thread2(void *arg)
{
	printf("calling thread 2\n");
	return NULL;
}
int main(void)
{
	int ret =pthread_create(&tid1,NULL,thread1,NULL);
	int ret2=pthread_create(&tid2,NULL,thread2,NULL);
	if(ret)
		printf("thread created\n");
	else if(ret2)
		printf("thread created\n");
	else
	{
	//	printf("not created\n");
		pthread_join(tid1,NULL);
		pthread_join(tid2,NULL);
	}
	return 0;
}

