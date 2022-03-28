#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd1,fd2,fd3,fd4;
	fd1=open("linux11.txt",O_WRONLY|O_CREAT|O_TRUNC,777);
	fd2=open("linux12.txt",O_WRONLY|O_CREAT|O_TRUNC,777);
	printf("fd1=%d\n",fd1);
	printf("fd2=%d\n",fd2);
	fd3=dup(fd1);
	printf("fd3=%d\n",fd3);
	fd4=dup2(fd1,4);
	printf("fd3 duplicate fd4=%d\n",fd4);
	close(fd1);
	close(fd2);
	close(fd3);
	close(fd4);

	return 0;
}



