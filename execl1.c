#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
//#include<sys/types.h>
//#include<sys/wait.h>
int main()
{
	pid_t pid;
	int option , stat;
	printf("Enter the execl value\n");
	scanf("%d",&option);
	if(!option)
		exit(0);
	if(fork()==0)
	{
		execl("/bin/ls","ls",0);
		exit(0);
	}
	return 0;
}










				
