#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("statement 1");
	fork();
	fork();
	printf("Statement 2");
	while(1)
		return 0;
}
