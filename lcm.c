#include<stdio.h>
int main()
{
	int num1,num2,i,lcm,gcd;
	printf("enter numbers\n");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<=num1 && i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
			gcd=i;
	}
	printf("gcd is %d\n",gcd);
	lcm=(num1*num2)/gcd;
	printf("lcm is %d\n",lcm);
	return 0;
}
