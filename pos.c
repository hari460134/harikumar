#include<stdio.h>
int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(num>0)
		printf("positive\n");
	if(num==0)
		printf("zero\n");
	if(num<0)
		printf("negative\n");
		return 0;
	}
