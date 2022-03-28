#include<stdio.h>
#include<pthread.h>
//#include<sys/mman.h>
void* Proc(void* param)
{
	sleep(3);
	return 0;
}
int main()
{
	pthread_attr_t Attr;
	pthread_t Id;
	int err,info;
	pthread_attr_init(&Attr);
	pthread_attr_getinheritsched(&Attr,&info);
	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("SCHED\n");
			break;
		case PTHREAD_EXPLICIT_SCHED:
			printf("EXPLICIT\n");
			break;
	}
	pthread_attr_setinheritsched(&Attr,PTHREAD_EXPLICIT_SCHED);
	pthread_attr_getinheritsched(&Attr,&info);
        switch(info)
        {
                case PTHREAD_INHERIT_SCHED:
                        printf("SCHED\n");
                        break;
                case PTHREAD_EXPLICIT_SCHED:
                        printf("EXPLICIT\n");
                        break;
        }
	printf("process creating thread whose sched policy is given by thread task proc\n");

	pthread_create(&Id,&Attr,Proc,NULL);
	pthread_join(Id,NULL);
	return 0;
}
