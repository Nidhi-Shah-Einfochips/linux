#include<stdio.h>
#include<unistd.h>
#include<string.h>
void my_mem_cpy(char *src,char *dest,int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		*dest=*src;
		dest++;
		src++;
	}
}


int main()
{
	char src[10]="hello";
	char dest[10];
//	printf("before \n");
	my_mem_cpy(src,dest,10);
	printf("dest = %s \n",dest);
	return 0;
}	
		
