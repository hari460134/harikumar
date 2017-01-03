#include<stdio.h>
int main()
{
	int count=0;
	long num;
	printf("enter a number\n");
	scanf("%ld",&num);
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	printf("number of digits are %d\n",count);
	return 0;
}
