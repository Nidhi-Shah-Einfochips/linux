#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>
int shareVar=5;
pthread_mutex_t my_mutex;
void *thread_inc(void *arg)
{
        pthread_mutex_lock(&my_mutex);
        shareVar++;
        pthread_mutex_unlock(&my_mutex);
        printf("after incre = %d\n",shareVar);
}
void *thread_dec(void *arg)
{
        pthread_mutex_lock(&my_mutex);

        shareVar--;
        pthread_mutex_unlock(&my_mutex);

        printf("after dec = %d\n",shareVar);
}
int main()
{
        pthread_t thread1,thread2;
        pthread_mutex__init(&my_mutex,NULL);
        pthread_create(&thread1,NULL,thread_inc,NULL);
        pthread_create(&thread2,NULL,thread_dec,NULL);
        pthread_join(thread1,NULL);
        pthread_join(thread2,NULL);
        printf("shareVar = %d\n",shareVar);
        return 0;
}
