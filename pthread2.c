#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

void *thread1(void *arg)
{
	char *s =(char *)arg;
	printf("%s\n",s);
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
      //  pthread_join(tid,NULL);
        exit(0);
	return 0;
}

