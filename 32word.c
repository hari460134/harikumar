#include<stdio.h>
#include<string.h>
int main()
{
	int len,sp=1,i;
	char c[40]="welcome to mits college";
	len=strlen(c);
	printf("length :%d\n",len);
	for(i=0;i<=len;i++)
	{
		if(c[i]==' ')
			sp=sp+1;
		}
		printf("words %d\n",sp);
	return 0;
}

