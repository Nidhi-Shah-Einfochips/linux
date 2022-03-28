#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int pid_1,pid_2;
	pid_1=fork();
	if(pid_1==0)
	{
		printf("first child\n");
	}
	else
	{
		pid_2=fork();
		if(pid_2==0)
		{
			printf("second child\n");
		}
		else
		{
			printf("parent child\n");
		}
	}
	return 0;
}
