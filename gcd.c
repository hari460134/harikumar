#include <stdio.h>
int main()
{
	int num1,num2,i,gcd;
	printf("enter num1 and num2 values\n");
	scanf("%d %d",&num1,&num2);
	for(i=1;i<=num1 && i<=num2; i++)
	{
		if(num1%i==0 && num2%i==0)
			gcd=i;
	}
	printf("gcd of %d and %d is %d\n",num1,num2,gcd);
	  return 0;
}
