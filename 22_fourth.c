#include<stdio.h>
#include<string.h>
struct student
{
        int roll;
       char name[40],gender __attribute__((aligned(2)));
        float height;
//	char x;
}__attribute__((packed));
int main()
{
	struct student first;
	printf("\n size of struct %3d \n",sizeof(first));
}
