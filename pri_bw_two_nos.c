#include<stdio.h>
int main()
{
	int count,start,end;
	int i,j;
	printf("enter starting and ending number\n");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i++)
	{
		count=0;
		for(j=1;j<=end;j++)
		{
			if(i%j==0)
				count++;
		}
				if(count==2)
				printf("%d is prime\n",i);
		}
	
	
	return 0;
}
