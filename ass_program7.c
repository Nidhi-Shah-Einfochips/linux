#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
	pid_t pid1;
	pid1=fork();
	if(pid1==0)
	{
		
//			sleep(5);
			printf("I am child = %d \n",getpid());
		}
		else
		{
			int pid2;
			pid2=wait(0);
			printf("I am parent process pro pid = %d ",getpid());
		}
}
		
