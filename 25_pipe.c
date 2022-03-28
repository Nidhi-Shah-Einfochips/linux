#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
	int fds[2];
	int res, i;
	char *buf1="Hello world";
	char *buf2="Linux Internals";
	char buf[26];
	res = pipe(fds);
	if(res ==-1)
	{
		perror("pipe");
		exit(1);
	}
	write(fds[1],buf1,11);
	write(fds[1],buf2,15);
	read(fds[0],buf,27);
	for(i=0;i<26;i++)
		printf("%c",buf[i]);
	printf("\n");
	return 0;
}

