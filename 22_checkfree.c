#include<stdio.h>
#include<stdlib.h>
void buggy()
{
	int *intptr;
	//int i;
	intptr = (int *)malloc(sizeof(int)*5);
	printf("Malloc checking  : Addr=%08x and size =%ld\n",intptr,sizeof(int )*5);
	
		*intptr =100;
		printf("value at ptr intptr = %d\n",(*intptr));
		free(intptr);
		*intptr=99;
	
}
int main()
{
	buggy();
	return 0;
}
