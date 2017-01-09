#include<stdio.h>
int main()
{
	int i,j,gre;
	int a[10];
	for(i=0;i<10;i++)
	{
		printf("enter %d value::",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=1;j<10;j++)
		{
			if(a[i]>a[j])
			gre=i;
			}
	}
	printf("%d is greater\n",gre);
	return 0;
}

