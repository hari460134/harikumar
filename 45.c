#include<stdio.h>
int main()
{
	int s,e,u;
	printf("enter start and end number\n");
	scanf("%d %d",&s,&e);
	printf("enter number b/w start and end\n");
	scanf("%d",&u);
	if(u<s || u>e)
		printf("entered out of range\n");
	else
		printf("entered within range\n");
	return 0;
}
