#include<stdio.h>
int main()
{
	int num,gcd,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			gcd=i;
	}
	printf("gcd of %d is:: %d\n",num,gcd);
	return 0;
}
	
	
	
