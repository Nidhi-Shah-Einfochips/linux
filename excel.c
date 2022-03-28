#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("i am going to executr an ls program\n");
	execl("/bin/ls","ls","-lh",0);
	execl("/home/nidhi/Documents/linux",vfork(),0);

	printf("i executed ls program");
	printf("i executed ls program");
	printf("i executed ls program ");
}
