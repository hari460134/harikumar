#include<stdio.h>
int main()
{
	int a=1,b=2,c=0;
	if(a>b && b>c)
		printf("%d is greater\n",a);
	if(b>a && b>c)
		printf("%d is greater\n",b);
	else
		printf("%d is greater\n",c);
	return 0;
}
