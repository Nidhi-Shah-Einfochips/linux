#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	char s[20];
	int fd;
	mkfifo("newfifo11",644);
	perror("mkfifo");
	printf("before open () .........\n");
	fd = open("newfifo11",O_WRONLY);
	printf("after open ......\n");
	printf("ENter data...\n");
	scanf("%s",s);
	write(fd,s,strlen(s)+1);
	return 0;
}
