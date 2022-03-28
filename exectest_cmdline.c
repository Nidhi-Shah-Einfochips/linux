#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
int main(int argc,char *argv[])
{
	int i;
	printf("\n file name : %s\n",argv[0]);
	printf("\n total number of arguments : %d",argc);
	printf("\n arguments passed : ");
	for(i=1;i<argc;i++)
		printf("%s",argv[i]);
	printf("\n");
	execl("Ass_program1","./ap","nidhi","linux",0);
	return 0;
}
