#include<stdio.h>
int main()
{
	int start,end,i;
	printf("enter  start and end number\n");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i=i+2)
	{
		if(i%2==1)
		    printf("%d\n",i);
	}
	return 0;
}
