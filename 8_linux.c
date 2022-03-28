#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int fd;
	int len;
	char write_buf[60]="Linux kernel ...";
	char read_bf[60];
	fd = open("linux.txt",O_CREAT|O_RDWR,777);
	len=write(fd,write_buf,60);
	printf("return value from write %d\n",len);
	lseek(fd,4,SEEK_SET);
	read(fd,read_bf,len);
	printf("data from buffer read %s\n",read_bf);
	close(fd);
	return 0;
}
