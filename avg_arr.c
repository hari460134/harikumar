#include<stdio.h>
int main()
{
	int avg,tot=0,i;
	int a[5]={3,2,4,5,8};
	for(i=0;i<5;i++)
	{
		tot=tot+a[i];
	}
	
	printf("total::%d\n",tot);
	avg=tot/5;
	printf("avg::%d\n",avg);
	return 0;
}
