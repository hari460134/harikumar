#include<stdio.h>
int main()
{
	int start,end,dum,rem,dig,i;
	printf("enter start and end values\n");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i++)
	{
		dum=i;
		dig=0;
		while(dum!=0)
		{
			rem=dum%10;
			dig=dig+rem*rem*rem;
			dum=dum/10;
		}
		if(i==dig)
			printf("%d\n",i);
	}
	return 0;
}
