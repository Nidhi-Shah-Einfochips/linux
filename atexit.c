#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
	void callback1(void)
	{
		printf("call back 1 function called \n");
	}
	void callback2(void)
	{
		printf("call back 2 function caleed \n");
	}
	void callback3(void)
	{
		printf("call back 3 function called \n");
	}
int main()
{
	printf("resgireting callback1\n");
	atexit(callback1);
	 printf("resgireting callback2\n");
        atexit(callback2);
	 printf("resgireting callback3\n");
        atexit(callback3);
	printf("main exiting now\n");
	exit(0);
}
