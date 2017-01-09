#include<stdio.h>
int main()
{
	int num,a=0,b=1,c=0,i;
	printf("enter a number\n");
	scanf("%d",&num);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=0;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
			printf("%d\n",c);
	}

	return 0;
}
		
