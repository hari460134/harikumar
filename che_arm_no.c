#include<stdio.h>
int main()
{
	int num,dig=0,rem,temp;
	printf("enter number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=(temp)%10;
		dig=dig+(rem*rem*rem);
		temp=(temp)/10;
	}
	if(num==dig)
		printf("%d is armstrong\n",num);
	else
		printf("%d is not armstrong\n",num);
		return 0;
}
	
