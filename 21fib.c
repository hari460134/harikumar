#include<stdio.h>
int main()
{
	int s1=0,s2=1,ne=0,end,i;
	printf("enter a number\n");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		if(i==1)
		{
			printf("%d\n",s1);
			continue;
		}
		if(i==2)
		{
			printf("%d\n",s2);
			continue;
	    }
		else{
			ne=s1+s2;
			s1=s2;
			s2=ne;
			printf("%d\n",ne);
		}
	}
	return 0;
}
