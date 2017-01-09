#include<stdio.h>
int main()
{
	int temp,a,b;
	printf("enter a and b values\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("values of a and b are %d %d\n",a,b);
	return 0;
}
