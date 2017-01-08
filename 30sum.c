#include<stdio.h>
int main()
{
	int sum=0,odd=0,i;
	for(i=1;i<=15;i++)
	{
		sum=sum+i;
	}
	printf("sum of 1-15 is %d\n",sum);
	for(i=15;i<=45;i++)
	{
		if(i%2==1)
			odd=odd+i;
	}
	printf("odd numbers bw 15-45 is %d\n",odd);
	return 0;
}
