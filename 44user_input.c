#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	if(num>=1 && num<=9)
		printf("user entered correctly\n");
	else
		printf("you entered number is not in range\n");
		return 0;
}
