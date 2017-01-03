#include<stdio.h>
int main()
{
	int sum=0,num,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
		sum=sum+i;
	printf("sum of N no.s is %d\n",sum);
	return 0;
}
