#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()

{
	int fd
//	int fd1,fd2,fd3;
	char write_buf[60]="kinuxkernel....";
	fd=open("linuxable.txt",O_CREAT | O_RDWR,777);
	write(fd,write_buf,60);
	close(fd);
	/*
	fd1= creat("linux1.txt",777);
	fd2=  creat("linux2.txt",777);
	fd3= creat("linux3.txt",777);

	printf("fd linux1.txt is %d\n",fd1);
	printf("fd linux2.txt is %d\n",fd2);
	printf("fd linux3.txt is %d\n",fd3);

	int close(int fd1);
	int close(int fd2);
	int close(int fd3);
	*/

	return 0;
}
