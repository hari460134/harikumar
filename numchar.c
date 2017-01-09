#include<string.h>
#include<stdio.h>
int main()
{
	int count=0,i;
	char a[20];
	printf("enter numeric characters\n");
	gets(a);
	int len=strlen(a);
	for(i=0;i<=len;i++)
	{
		if(a[i]>='0' && a[i]<='9')
			count++;
		}
		printf("numeric character %d\n",count);
		return 0;
	}
