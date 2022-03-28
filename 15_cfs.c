#include<stdio.h>
#include<unistd.h>
#include<errno.h>
int main()
{
	int ret,ret1,i, cnt=0,cnt1=0;
	errno=0;
	ret=nice(1);
	ret1=nice(2);
	if(ret== -1 && errno!=0)
		perror("nice");
	else
		printf("nice values now %d\n",ret);
	while(1)
	{
		printf("process with nice value %d count = %d\n",ret,cnt);
		for(i=0;i<100000000;i++);
		cnt++;
		printf("process with nice value %d count = %d\n",ret1,cnt1);
                for(i=0;i<100000000;i++);
                cnt++;

	}
	

}
