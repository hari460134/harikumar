#include<stdio.h>
int main()
{
	int i,low=0,high=0;
	int a[5]={3,2,4,5,8};
	high=a[0];
	for(i=0;i<5;i++)
	{
		if(high<a[i])
			high=a[i];
	}
	low=a[0];
	for(i=0;i<5;i++)
	{
		if(low>a[i])
			low=a[i];
	}
		printf("low==%d\n",low);
		printf("high==%d\n",high);
return 0;
}
