#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void *thread1(void *arg)
{
	char *s =(char *)arg;
	printf("%s\n",s);
	sleep(5);
	return (void*)strlen(s);
       // printf("newly created thread is exceuting \n");
        return NULL;
}
int main()
{
	pthread_t tid;
	void *res;
        int ret;
	       ret = pthread_create(&tid,NULL,thread1,"Hello world");
       // if(ret)
         //       printf("thread is not created\n");
       // else
         //       printf("thread is created\n");
        //sleep(2);
       pthread_join(tid,&res);
       printf("thread returened %ld\n",(long)res);
        exit(0);
	return 0;
}
