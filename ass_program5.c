#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int fd;
	int len;
	char write_buf[60]="Linux kernel ...";
	char read_bf[60];
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		sleep(5);
		printf("I am child with delay of 5 sec and my chlid pid is = %d\n",getpid());
		fd = open("program_5.txt",O_CREAT|O_RDWR,777);
		printf("fd = %d\n",fd);
		if(fd>0)
		{
		len=write(fd,write_buf,60);
		}
		else
		{
			printf("Error...........\n");
		}
		//printf("return value from write %d\n",len);
		lseek(fd,0,SEEK_SET);
		read(fd,read_bf,len);
		printf("data from buffer read %s\n",read_bf);
	}
	else
	{
		wait(0);
		printf("I am parent process pid = %d\n",getpid());
	}

		close(fd);
	return 0;
}
