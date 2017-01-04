#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0;
	printf("enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		rem=(temp)%10;
		rev=rem+(rev)*10;
		temp=(temp)/10;
	}
	if(num==rev)
		printf("%d is palindrome\n",num);
	else
		printf("%d is not a palindrome\n",num);
	return 0;
}
