#include<stdio.h>
#include<string.h>
int main()
{
	int i,sc=0;
	char src[20];
	printf("enter a special character\n");
	scanf("%s",src);
	int len=strlen(src);
	for(i=0;i<len;i++)
	{
		if(src[i]>=65 && src[i]<=90)
		{
		}
		if(src[i]>=97 && src[i]<=122)
		{
		}
		else
			sc++;
		}
		printf("no of special character %d\n",sc);
		return 0;
}
