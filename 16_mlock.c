#include<unistd.h>
#include<stdio.h>
//#include<lclib.h>
int main()
{
	size_t i;
	const int alloc_size=31*1024*1024;
	char *memory= malloc(alloc_size);
	mlock(memory,alloc_size);
	for(i=0;i<alloc_size;i++)
	memory[i]='#';
	printf("allocated memory initialized with = %s\n",memory);
	munlock(memory,alloc_size);
}

