#include<stdio.h>
int main()
{
	int num,res,i;
	printf("enter number\n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		res=num*i;
		printf("%d*%d=%d\n",num,i,res);
	}
	return 0;
}
