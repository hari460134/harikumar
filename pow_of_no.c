#include<stdio.h>
int main()
{
	int base,exponent;
	int result=1;
	printf("enter a base\n");
	scanf("%d",&base);
	printf("enter exponent\n");
	scanf("%d",&exponent);
	while(exponent!=0){
		result=result*base;
		exponent--;
	}
	printf("power %d\n",result);
	return 0;
}
