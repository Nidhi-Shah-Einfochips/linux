#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int pid_1;
	printf("Current process pid = %d\n",getpid());
	execl("/home/nidhi/Documents/linux",vfork,0);//

	pid_1=vfork();
	
	if(pid_1==0)
	{
		printf("new child process = %d\n",getpid());
		printf("new child parent = %d\n",getppid());
	}
	else
	{

		sleep(3);
		printf("new parent process = %d\n",getpid());
                printf("new parent parent = %d\n",getppid());
	}
	exit(0);
	return 0;
}
