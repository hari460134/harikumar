#include<stdio.h>
int main()
{
	int num,re=0;
	int rem,temp;
	printf("enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=temp%10;
		re=rem+re*10;
		temp=temp/10;
	}
	printf("%d\n",re);
	return 0;
}
