#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd,fd1;
	int read_buf[60];
	fd = open("file.txt",O_RDWR,777);
	read(fd,read_buf,60);
	fd1=open("file2.txt",O_CREAT | O_RDWR,777);
	write(fd1,read_buf,60);
	close(fd);
	close(fd1);
	return 0;
}


