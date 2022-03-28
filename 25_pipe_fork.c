#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int fds[2];
void parent()
{
	 char *buf1="Hello world";
        char *buf2="Linux Internals";
	close(fds[0]);
	 write(fds[1],buf1,11);
        write(fds[1],buf2,15);
	printf("end of parent\n");
}
void child()
{
	char buf[26];
	int n,i;
	close(fds[1]);
	n=read(fds[0],buf,26);
	printf("no of chars read = %d\n",n);
	for(i=0;i<n;i++)
		printf("%c",buf[i]);
	printf("\nend of child\n");
}


int main()
{
        int res, i;
        pid_t p;
        res = pipe(fds);
        if(res ==-1)
        {
                perror("pipe");
                exit(1);
        }
       	p=fork();
	if(p==0)
	{
		child();
	}
	else
		parent();

        printf("\n");
}
