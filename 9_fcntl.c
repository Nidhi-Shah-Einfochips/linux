#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2,fd3;
	fd1=open("linux13.txt",O_WRONLY|O_CREAT|O_TRUNC,777);
	fd3=fcntl(fd1,F_DUPFD);
	printf("fd3_duplicate %d\n",fd3);
	return 0;
}

