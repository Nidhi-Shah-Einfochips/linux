#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<pthread.h>
#include<bits/types.h>
#include<sys/types.h>

static pthread_spinlock_t spinlock;
volatile int slock;

void *spinlockthread(void *i)
{
	int rc;
	int count=0;
	printf("entered thread %d ,getting spin lock \n",(int *)i);
	rc=pthread_spin_lock(&slock);
	printf("%d thread unlock thr spin lock\n",(int  *)i);
	rc=pthread_spin_unlock(&slock);
	printf("%d thread complete\n",(int *)i);
	return NULL;
}
int main()
{
	int rc=0;
	pthread_t thread1,thread2;
	if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
		perror("init");
	printf("main get spin lock\n");
	rc=pthread_spin_lock(&slock);
	printf("main create spin lock thread\n");
	rc=pthread_create(&thread1,NULL,spinlockthread,(int *)1);
	printf("main,wait a bit holding the spin lock\n");
	sleep(5);
	printf("main now unlock apin\n");
	rc=pthread_spin_unlock(&slock);
	if(rc==0)
		printf("\n main thread succesfully unlocked \n");
	else
		printf("\n main thread unsuccesfully unlocked\n");
	printf("main wait for the thread to end \n");
	rc=pthread_join(thread1,NULL);
	printf("main complete\n");
	return 0;
}
