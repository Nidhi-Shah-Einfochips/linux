#include<stdio.h>
#include<string.h>
int main()
{
	const char str[]="linuxkernel.com";
	const char ch='#';
	char *ret;
	printf("string before set is %s \n",str);
	ret=memchr(str,ch,strlen(str));
//	 memset(str,ch,strlen(str));

	printf("String after set is **%c** is **%s**\n",ch,ret);
	return 0;
}
