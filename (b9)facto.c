#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	if(num!=0)
		fact=fact*i;
	}
	printf("%d\n",fact);
	return 0;
}
