#include<stdio.h>
#include<unistd.h>
int main()
{
	int pid;
	printf("current processs " ,getpid());
	pid=fork();
	if(pid)
	{
	printf("child process ",getpid());
	printf("parent process "getppid());
	}

